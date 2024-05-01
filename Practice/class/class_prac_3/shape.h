#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>
using std::string;
class Shape
{
protected:
    string _name;
    double _size = 0;
    string _color;

public:
    Shape() : _name("N/A"), _color("N/A"){};
    Shape(string name, string color) :_name(name), _color(color) {};
    double getSize() { return _size; };
    virtual void calcSize() = 0;
};

#endif // SHAPE_H