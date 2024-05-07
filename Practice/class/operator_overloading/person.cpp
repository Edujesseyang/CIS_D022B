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
// single member setters
void Person::setName(const string &name) { _name = name; }
void Person::setGender(const string &gender) { _gender = gender; }
void Person::setAge(int age) { _age = age; }

// getters
string Person::getInfo() const { return "Name: " + _name + " Gender: " + _gender + " Age: " + to_string(_age); }
string Person::getName() const { return _name; }
string Person::getGender() const { return _gender; }
int Person::getAge() const { return _age; }

// operators
ostream &operator<<(ostream &os, const Person &that)
{
    os << "Name: " << that._name << '\n';
    os << "Gender: " << that._gender << '\n';
    os << "Age: " << that._age;
    return os;
}

istream &operator>>(istream &is, Person &that)
{
    is >> that._name >> that._gender >> that._age;

    return is;
}