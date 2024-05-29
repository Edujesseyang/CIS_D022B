#pragma once
#include <iostream>
#include <string>
#include "student.h"
#include "person.h"
using namespace std;

class Grad : public Student
{
private:
    string thesis = 0;
    static int count;

public:
    Grad();                           // default constructor
    ~Grad();                          // destructor
    Grad &operator=(const Grad &obj); // assign operator
    Grad(const Grad &obj);            // copy constructor

    // other constructors
    Grad(string name, int age, string major, int year, string thesis);

    // setters
    void set_thesis(const string &thesis_i);
    void set(const string &name_i, int age_i,
             const string &major_i, int year_i, const string &thesis);
    void set(const Grad &obj);

    // getters
    string get_thesis() const;
};