#include <iostream>
#include <limits>
#include "Student.h"

using namespace std;

//initialize all static data here:
int Student::count = 0;

//implement all methods declared in Student.h

//four basic methods
Student::Student()
//default constructor
{
	count++;
	Person();
	set("", 0);
}

Student::~Student()
//destructor
{
	count--;
	//no pointers; no dynamic memory to delete
	//if the class has allocated memory, we must delete it here.
}

Student::Student(const Student& obj)
//copy ocnstructor
{
	count++;
	set(obj);
}

Student& Student::operator=(const Student& obj)
//assignment operator
{
	if (this == &obj)
		return (*this);

	set(obj);
	return *this;	
}

//other constructors
Student::Student(const string& name_i, int age_i,
	const string& major_i, int year_i)
{
	count++;
	set(name_i, age_i, major_i, year_i);
}

//in c++, we override << operator as a friend; not a member
//friend methods can assess private members
ostream& operator<<(ostream& os, const Student& obj)
{
	os << Person(obj) <<
		", major = " << obj.major << ", year = " << obj.year;
	//os << endl;
	return os;
}

istream& operator>>(istream& is, Student& obj)
{
	Person p;
	is >> p;
	obj.set_name(p.get_name());
	obj.set_age(p.get_age());
	cout << "Enter major: ";
	//cin would read one word only from major; use getline
	is.ignore(); //when using getline and cin together
	getline(cin, obj.major);
	cout << "Enter year: ";
	is >> obj.year;
	return is;
}

int Student::get_count()
{
	return count;
}

void Student::set_count(int count_i)
{
	count = count_i;
}

int Student::get_year() const
{
	return year;
}

const string Student::get_major() const
{
	return major;
}

void Student::set_major(const string& major_i)
{
	major = major_i;
}

void Student::set_year(int year_i)
{
	year = year_i;
}

void Student::set(const string& major_i, int year_i)
{
	set_major(major_i);
	set_year(year_i);
}

void Student::set(const string& name_i, int age_i,
	const string& major_i, int year_i)
{
	//set name and age?
	Person::set(name_i, age_i);
	set_major(major_i);
	set_year(year_i);
}

void Student::set(const Student& obj)
{
	//Person::set(obj);
	Person::set(obj.get_name(), obj.get_age());
	set(obj.major, obj.year);
}

void Student::print(ostream& os) const
{
	os << *this << endl;
}

void Student::read()
{
	cin >> *this;
}