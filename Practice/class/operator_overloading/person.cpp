#include <iostream>
#include <string>
#include "person.h"
using namespace std;

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
Person &Person::operator=(Person that)
{

    this->_name = that._name;
    this->_gender = that._gender;
    this->_age = that._age;

    return *this;
}

// param constructor
Person::Person(const string &name, const string &gender, int age)
{
    set(name, gender, age);
}

// multi-param setter
void Person::set(const string &name, const string &gender, int age)
{
    this->_name = name;
    this->_gender = gender;
    this->_age = age;
}
// copy setter
void Person::set(const Person &that)
{
    set(that._name, that._gender, that._age);
}

// operators
ostream &operator<<(ostream &os, const Person &that)
{
    os << "Name: " << that._name << '\n';
    os << "Gender: " << that._gender << '\n';
    os << "Age: " << that._age << '\n';
    return os;
}

istream &operator>>(istream &is, Person &that)
{
    if(!(is >> that._name >> that._gender >> that._age))
    {
        return is;
    }
    else
    {
        cout << "Wrong inputs\n";
    }
}