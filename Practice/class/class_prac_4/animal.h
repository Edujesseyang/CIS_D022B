#pragma once

#include <iostream>
#include <string>
using std::string;

class Animal
{
protected:
    string _name = "N/A";
    int _age = 0;
    double _weight = 0;
    string _color = "N/A";

public:
    // setter
    virtual void set_name(string name) = 0;
    virtual void set_age(int age) = 0;
    virtual void set_weight(double weight) = 0;
    virtual void set_color(string color) = 0;

    // getter
    virtual string get_name() const = 0;
    virtual int get_age() const = 0;
    virtual double get_weight() const = 0;
    virtual string get_color() const = 0;

    // printer
    virtual void print_info() const = 0;
};