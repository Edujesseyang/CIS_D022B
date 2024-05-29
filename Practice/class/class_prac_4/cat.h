#pragma once

#include <iostream>
#include <string>
#include "animal.h"
using std::string;

class Cat : public Animal
{
private:
    string _owner_name = "N/A";
    bool _is_tagged = false;

public:
    Cat(string name = "N/A", int age = 0, double weight = 0, string color = "N/A", string owner = "N/A", bool tag = false)
        : _owner_name(owner), _is_tagged(tag)
    {
        _name = name;
        _age = age;
        _weight = weight;
        _color = color;
    };
    // setter
    void set_name(string name) override
    {
        _name = name;
    }
    void set_age(int age) override
    {
        _age = age;
    }
    void set_weight(double weight) override
    {
        _weight = weight;
    }
    void set_color(string color) override
    {
        _color = color;
    }

    void set_owner(string name) { _owner_name = name; }
    void set_tag(bool isTagged) { _is_tagged = isTagged; }

    // getter
    string get_name() const override
    {
        return _name;
    }
    int get_age() const override
    {
        return _age;
    }
    double get_weight() const override
    {
        return _weight;
    }
    string get_color() const override
    {
        return _color;
    }

    string get_owner() const { return _owner_name; }
    bool get_tag() const { return _is_tagged; }

    // printer
    void print_info() const override
    {
        std::cout << "------------------------------------\n";
        std::cout << "Name: " << _name << '\n';
        std::cout << "age: " << _age << '\n';
        std::cout << "weight: " << _weight << '\n';
        std::cout << "color: " << _color << '\n';
        std::cout << "Owner is: " << _owner_name << '\n';
        std::cout << "If it is tagged: " << (_is_tagged ? "Yes" : "No") << '\n';
        std::cout << "------------------------------------\n";
    }
};
