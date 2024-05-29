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

// stream operators
ostream &operator<<(ostream &os, const Grad &obj)
{
    os << "Grad Student's Infomation:\n";
    os << "Name: " << obj.get_name() << '\n';
    os << "Age: " << obj.get_age() << '\n';
    os << "Major: " << obj.get_major() << '\n';
    os << "Year: " << obj.get_year() << '\n';
    os << "Thesis: " << obj.get_thesis() << '\n';
}
istream &operator>>(istream &is, Grad &obj)
{
    Student S;
    is >> S;
    obj.set_name(S.get_name());
    obj.set_age(S.get_age());
    obj.set_major(S.get_major());
    obj.set_year(S.get_year());
    cout << "Enter thesis: ";
    // cin would read one word only from major; use getline
    is.ignore(); // when using getline and cin together
    getline(is, obj.thesis);
    return is;
}