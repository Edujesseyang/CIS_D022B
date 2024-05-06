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
    // default constructor
    Person();
    // destructor
    virtual ~Person();
    // copy constructor
    Person(const Person &that);
    // assign operator
    Person &operator=(Person that);
    // param constructor
    explicit Person(const string &name, const string &gender, int age);

    // setters
    void set(const string &name, const string &gender, int age);
    void set(const Person &that);
    void setName(const string &name);
    void setGender(const string &gender);
    void setAge(int age);

    // getters
    string getInfo() const;
    string getName() const;
    string getGender() const;
    int getAge() const;

    friend ostream &operator<<(ostream &os, const Person &that);
    friend istream &operator>>(istream &is, Person &that);
};

#endif // PERSON_H