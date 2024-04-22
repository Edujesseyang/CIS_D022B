#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string>
#include "Cat.h"

// constructor
Cat::Cat(std::string name, int age, double weight, std::string color, bool spay)
    : _name(name), _age(age), _weight(weight), _color(color), _spay(spay = false){};

// getter
std::string Cat::get_name() const
{
    return _name;
};
int Cat::get_age() const
{
    return _age;
};
double Cat::get_weight() const
{
    return _weight;
};
std::string Cat::get_color() const
{
    return _color;
};
bool Cat::get_spay() const
{
    return _spay;
};

// setter
bool Cat::set_name(std::string name)
{
    if (name == "")
    {
        return false;
    }
    _name = name;
    return true;
}
bool Cat::set_age(int age)
{
    if (age <= 0)
    {
        return false;
    }
    _age = age;
    return true;
}
bool Cat::set_weight(double weight)
{
    if (weight < 0)
    {
        return false;
    }
    _weight = weight;
    return true;
}
bool Cat::set_color(std::string color)
{
    if (color == "")
    {
        return false;
    }
    _color = color;
    return true;
}
bool Cat::set_spay(bool spay)
{
    _spay = spay;
    return true;
}

// operator
bool Cat::operator==(Cat that)
{
    if ((this->_name == that._name) &
        (this->_age == that._age) &
        (this->_weight == that._weight) &
        (this->_color == that._color) &
        (this->_spay == that._spay))
    {
        return true;
    }
    else
    {
        return false;
    }
}

// friend operator
std::ostream &operator<<(std::ostream &os, Cat const &cat)
{
    os << "Name: " << cat._name << '\n'
       << "Age: " << cat._age << '\n'
       << "Weight: " << cat._weight << '\n'
       << "Color: " << cat._color << '\n';
    if (cat._spay == true)
    {
        os << "It has spayed.\n";
    }
    else
    {
        os << "It has not spayed yet.\b";
    }

    return os;
};

#endif // CAT_H