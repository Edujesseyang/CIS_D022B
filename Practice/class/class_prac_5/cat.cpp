#include <iostream>
#include <string>
#include "animal.h"
#include "pet.h"
#include "cat.h"
using namespace std;

int Cat::count = 0;

Cat::Cat() : Pet(), _color("Not specified") { ++count; }
Cat::Cat(char gender, const string &name, const string &owner, const string &color)
    : Pet("Cat", gender, name, owner), _color(color) { ++count; }
Cat::Cat(const Cat &obj)
{
    _type = obj._type;
    _gender = obj._gender;
    Pet::set_name(obj.get_name());
    Pet::set_owner(obj.get_owner());
    _color = obj._color;
    ++count;
}
Cat::~Cat(){};

void Cat::set_color(const string &color)
{
    _color = color;
}
void Cat::set_cat(const string &type, char gender, const string &name, const string &owner, const string &color)
{
    _type = type;
    _gender = gender;
    Pet::set_name(name);
    Pet::set_owner(owner);
    _color = color;
}

string Cat::get_color() const
{
    return _color;
}

Cat &Cat::operator=(const Cat &obj)
{
    _type = obj._type;
    _gender = obj._gender;
    Pet::set_name(obj.get_name());
    Pet::set_owner(obj.get_owner());
    _color = obj._color;
    ++count;
}
istream &operator>>(istream &is, Cat &obj)
{
    obj._type = "Cat";
    cout << "Enter cat's gender: ";
    is >> obj._gender;
    cout << "Enter cat's name: ";
    string name;
    is >> name;
    obj.set_name(name);
    cout << "Enter cat's owner: ";
    string owner;
    cin >> owner;
    obj.set_owner(owner);
    cout << "Enter cat's color: ";
    cin >> obj._color;
    return is;
}
ostream &operator<<(ostream &os, Cat &obj)
{
    os << "Animal type: " << obj._type << '\n';
    os << "Gender: " << obj._gender << '\n';
    os << "Cat's name: " << obj.get_name() << '\n';
    os << "Owner name: " << obj.get_owner() << '\n';
    os << "Cat's color: " << obj._color << '\n';
    return os;
}

static int count;
int Cat::get_count()
{
    return count;
}