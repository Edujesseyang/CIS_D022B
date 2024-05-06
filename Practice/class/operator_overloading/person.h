#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using std::cout;
using std::istream;
using std::ostream;
using std::string;

class Person
{
private:
    string _name;
    string _gender;
    int _age;

public:
    Person();
    ~Person();
    Person(const Person &that);
    Person &operator=(Person that);
    explicit Person(const string &name, const string &gender, int age);

    void set(const string &name, const string &gender, int age);
    void set(const Person &that);

    friend ostream &operator<<(ostream &os, const Person &that);
    friend istream &operator>>(istream &is, Person &that);
};

#endif // PERSON_H