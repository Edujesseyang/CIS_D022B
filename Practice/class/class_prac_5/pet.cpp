#include <iostream>
#include <string>
#include "animal.h"
#include "pet.h"

using namespace std;

int Pet::count = 0;
Pet::Pet() : Animal(), _name("UNKNOWN"), _owner("none") { count++; };
Pet::Pet(const string &type, char gender, const string &name, const string &owner)
    : Animal(type, gender), _name(name), _owner(owner) { count++; };

Pet::Pet(const Pet &obj) : Animal(obj._type, obj._gender), _name(obj._name), _owner(obj._owner) { count++; };

Pet::~Pet() { count--; };

void Pet::set_name(const string &name)
{
    _name = name;
}
void Pet::set_owner(const string &owner)
{
    _owner = owner;
}
void Pet::set_pet(const string &type, char gender, const string &name, const string &owner)
{
    _type = type;
    _gender = gender;
    _name = name;
    _owner = owner;
}

string Pet::get_name() const
{
    return _name;
}
string Pet::get_owner() const
{
    return _owner;
}

Pet &Pet::operator-(const Pet &obj)
{
    _type = obj._type;
    _gender = obj._gender;
    _name = obj._name;
    _owner = obj._owner;
}

istream &operator>>(istream &is, Pet &obj)
{
    cout << "Enter pet type: ";
    is >> obj._type;
    cout << "Enter pet gender: ";
    is >> obj._gender;
    cout << "Enter pet name: ";
    is >> obj._name;
    cout << "Enter pet owner: ";
    is >> obj._owner;
    return is;
}
ostream &operator<<(ostream &os, const Pet &obj)
{
    os << "Animal type: " << obj._type << '\n';
    os << "Gender: " << obj._gender << '\n';
    os << "Pet name: " << obj._name << '\n';
    os << "Owner name: " << obj._owner << '\n';
    return os;
}

int Pet::get_count() const
{
    return count;
}