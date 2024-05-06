#pragma once
#include <iostream>
#include <string>
using namespace std;

class Cat
{
private:
    std::string _name = "n/a";
    int _age = 0;
    std::string _color = "unknown";
    static int _count;

public:
    // 4 basic type of constructor
    Cat();
    virtual ~Cat();
    Cat(const Cat &that);
    Cat &operator=(const Cat &that);

    // other constructor and override
    Cat(const string &name, const int &age, const string &color);

    // setters
    void set(const string &name, const int &age, const string &color);
    bool setName(const string &name);
    bool setAge(const int &age);
    bool setColor(const string &color);

    // getter
    string getInfo() const;
    string getName() const;
    int getAge() const;
    string getColor() const;
    static int getCount();

    // printer
    friend ostream &operator<<(ostream &os, const Cat &that);
    bool printInfo() const;
};