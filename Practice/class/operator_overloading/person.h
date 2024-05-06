#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::ostream;
using std::istream;

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
    Person& operator=(const Person &that);
    Person(const string &name, const string &gender, int age);

    void set(const string& name, const string& gender, int age);
    void set(const Person &that);

    friend ostream &operator<<(ostream &os, const Person& that);
    istream &operator>>(istream &is);
};

#endif //PERSON_H