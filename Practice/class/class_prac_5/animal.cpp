#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

int Animal::count = 0;

Animal::Animal() : _type("N/A"), _gender('?') { count++; };
Animal::Animal(const string &type, char gender) : _type(type), _gender(gender) { count++; };
Animal::Animal(const Animal &obj) : _type(obj._type), _gender(obj._gender) { count++; }
Animal::~Animal() { count--; };

// getters
string Animal::get_type() const
{
    return _type;
};
char Animal::get_gender() const
{
    return _gender;
};

// setters
void Animal::set_type(const string &type)
{
    _type = type;
}
void Animal::set_gender(char gender)
{
    _gender = gender;
}
void Animal::set_animal(const string &type, char gender)
{
    _type = type;
    _gender = gender;
};

// operators
Animal &Animal::operator=(const Animal &obj)
{
    _type = obj.get_type();
    _gender = obj.get_gender();
}
ostream &operator<<(ostream &OS, const Animal &obj)
{
    OS << "Animal type: " << obj._type << '\n';
    OS << "Gender: " << obj._gender << '\n';
    return OS;
}
istream &operator>>(istream &IS, Animal &obj)
{
    cout << "Enter the type and gender(m/f): ";
    IS >> obj._type >> obj._gender;
    cout << '\n';
    return IS;
}

int Animal::get_count()
{
    return count;
}