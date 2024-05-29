#include <iostream>
#include <string>
#include "grad.h"
#include "student.h"
#include "person.h"

using namespace std;

int Grad::count = 0; // init static counter
Grad::Grad()
{
    count++;
    Student();
    thesis = "N/A"; // default private data

} // default constructor
Grad::~Grad()
{
    count--;
} // destructor
Grad &Grad::operator=(const Grad &obj)
{
    if (this == &obj)
        return (*this);

    set(obj);
    return *this;
} // assign operator
Grad::Grad(const Grad &obj)
{
    Student::set(obj.get_name(), obj.get_age(), obj.get_major(), obj.get_year());
    thesis = obj.get_thesis();

} // copy constructor

Grad::Grad(string name_i, int age_i, string major_i, int year_i, string thesis_i)
{
    Student::set(name_i, age_i, major_i, year_i);
    thesis = thesis_i;
} // other constructor

// getters
string Grad::get_thesis() const
{
    return thesis;
}

// setters
void Grad::set_thesis(const string &thesis_i)
{
    thesis = thesis_i;
}

void Grad::set(const string &name_i, int age_i,
               const string &major_i, int year_i, const string &thesis_i)
{
    Student::set(name_i, age_i, major_i, year_i);
    set_thesis(thesis_i);
}

void Grad::set(const Grad &obj)
{
    Student::set(obj.get_name(), obj.get_age(), obj.get_major(), obj.get_year());
    set_thesis(obj.get_thesis());
}