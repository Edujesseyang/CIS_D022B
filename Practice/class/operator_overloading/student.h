#pragma once
#include <iostream>
#include <string>
#include "person.h"
using namespace std;

class Student : public Person
{
private:
    int _id;
    double _gpa;
public:
    Student(); 
    Student(const Student &that);
    Student &operator=(const Student &that);

    // setter
    void set(const string &name, const string &gender, int age, int id, double gpa);
    void set(const Student &that);
    void setId(int id);
    void setGpa(double gpa);

    // getter
    string getInfo() const;
    int getId() const;
    double getGpa() const;

    // operator 
    friend ostream &operator<<(ostream &os, const Student &that);
    friend istream &operator>>(istream &is, Student &that);
};