#pragma once

#include <iostream>
#include <string>
#include "person.h"
using namespace std;

class Student: public Person
{
public:
	//Four basic methods a class must have.
	Student();	//default constructor
	virtual ~Student();	//destructor
	Student(const Student& s);	//copy constructor
	Student& operator=(const Student& s); //assignment operator

	//other constructors
	Student(const string& name_i, int age_i, 
		const string& major_i, int year_i);

	friend ostream& operator<<(ostream& os, const Student& s);
	friend istream& operator>>(istream& os, Student& s);

	//static functions can access only static members
	//static in .h only; no "this" in static
	static int get_count();
	static void set_count(int count_i);

	//get methods; getters; selectors; read only
	int get_year() const; //object *this is const
	const string get_major() const; //object *this is const

	//set methods; setters; modifiers; read/write
	void set_year(int year_i);
	void set_major(const string& major_i);

	virtual void set(const string& major_i, int year_i);
	virtual void set(const string& name_i, int age_i,
		const string& major_i, int year_i);
	virtual void set(const Student& s);

	//other methods
	//we do not need print(); overloading << is enough
	//we do not need read(); overloading >> is enough
	//print is only for demonstration
	virtual void print(ostream& os) const;
	virtual void read();

private:
	static int count;
	string major;
	int year;

	//protected:
};
