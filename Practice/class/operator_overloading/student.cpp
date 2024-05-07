#include <iostream>
#include <string>
#include "student.h"
#include "person.h"
using namespace std;

Student::Student() : Person(), _id(0), _gpa(0.0) {}
Student::Student(const Student &that) : Person(that), _id(that._id), _gpa(that._gpa) {}
Student &Student::operator=(const Student &that)
{
    this->_gpa = that._gpa;
    this->_id = that._id;
    this->_name = that._name;
    this->_gender = that._gender;
    this->_age = that._age;
}

// setter
void Student::set(const string &name, const string &gender, int age, int id, double gpa) 
{
    Person::set(name, gender, age);
    this->_id = id;
    this->_gpa = gpa;
}

void Student::set(const Student &that)
{
    Person::set(that);
    this->_id = that._id;
    this->_gpa = that._gpa;
}
void Student::setId(int id) { this->_id = id; }
void Student::setGpa(double gpa) { this->_gpa = gpa; }

// getter
string Student::getInfo() const { return "ID: " + to_string(_id) + " GPA: " + to_string(_gpa); }
int Student::getId() const { return _id; }
double Student::getGpa() const { return _gpa; }

// operator
ostream &operator<<(ostream &os, const Student &that)
{
    os << static_cast<const Person &>(that) << "\nID: " << that._id << "\nGPA: " << that._gpa << '\n';
}
istream &operator>>(istream &is, Student &that)
{
    is >> static_cast<Person &>(that) >> that._id >> that._gpa;
    cin.ignore();
}