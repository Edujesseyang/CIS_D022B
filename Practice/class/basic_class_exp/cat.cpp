#include <iostream>
#include <string>
#include "cat.h"
using namespace std;

int Cat::_count = 0; // init static member

// default constructor
Cat::Cat() : _name("N/A"), _age(0), _color("N/A") { _count++; }

// default destructor
Cat::~Cat() { _count--; };

// copy constructor
Cat::Cat(const Cat &that)
{
    this->_name = that._name;
    this->_age = that._age;
    this->_color = that._color;
    _count++;
}

// assign operator
Cat &Cat::operator=(const Cat &that)
{
    if (this != &that)
    {
        this->_name = that._name;
        this->_age = that._age;
        this->_color = that._color;
        _count++;
    }
    return *this;
}

// other constructor and override
Cat::Cat(const string &name, const int &age, const string &color) : _name(name), _age(age), _color(color) { _count++; }
// .... we can add more with different params order

// setters
void Cat::set(const std::string &name, const int &age, const std::string &color)
{
    _name = name;
    _age = age;
    _color = color;
}

bool Cat::setName(const std::string &name)
{
    if (name != "")
    {
        _name = name;
        return 0;
    }
    else
    {
        cout << "param missed\n";
        return 1;
    }
}
bool Cat::setAge(const int &age)
{
    if (age > 0)
    {
        _age = age;
        return 0;
    }
    else
    {
        cout << "param missed\n";
        return 1;
    }
}
bool Cat::setColor(const string &color)
{
    if (color != "")
    {
        _color = color;
        return 0;
    }
    else
    {
        cout << "param missed\n";
        return 1;
    }
}

// getter
string Cat::getInfo() const
{
    string result = "Name: " + _name + "\nAge: " + to_string(_age) + "\nColor: " + _color + "\n";
    return result;
}

string Cat::getName() const
{
    return _name;
}
int Cat::getAge() const
{
    return _age;
}
string Cat::getColor() const
{
    return _color;
}
int Cat::getCount()
{
    return _count;
}

// printer
ostream &operator<<(ostream &os, const Cat &that)
{
    os << "Name:\t " << that._name << "\nAge:\t " << that._age << "\nColor:\t " << that._color << "\n";
    return os;
}
bool Cat::printInfo() const
{
    cout << "Cat number " << _count << ": \n";
    cout << "Name:\t " << _name << "\tAge:\t " << _age << "\tColor:\t " << _color << "\n";
}