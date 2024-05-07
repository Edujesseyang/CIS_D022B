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




};