#include <iostream>
#include <string>
#include "person.h"
using std::cout;
using std::istream;
using std::ostream;
using std::string;

// default constructor
Person::Person()
{
    this->_name = "N/A";
    this->_gender = "Unknown";
    this->_age = 0;
}

// destructor
Person::~Person(){};

// copy constructor
Person::Person(const Person &that)
{
    set(that);
}

// assign operator
Person &Person::operator=(const Person &that)
{
    if (this != &that)
    {
        this->_name = that._name;
        this->_gender = that._gender;
        this->_age = that._age;
    }
    return *this;
}

// param constructor
Person::Person(const string &name, const string &gender, int age)
{
    set(name, gender, age);
}

// master setters
void Person::set(const string &name, const string &gender, int age)
{
    this->_name = name;
    this->_gender = gender;
    this->_age = age;
}
void Person::set(const Person &that)
{
    this->_name = that._name;
    this->_gender = that._gender;
    this->_age = that._age;
}

// operators
ostream &operator<<(ostream &os, const Person &that)
{
    os << "Name: " << that._name << '\n';
    os << "Gender: " << that._gender << '\n';
    os << "Age: " << that._age << '\n';
}

istream &Person::operator>>(istream &is)
{

    is >> _name >> _gender >> _age;
}