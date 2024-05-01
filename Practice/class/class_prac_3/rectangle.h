#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <string>
#include "shape.h"

using std::string;

class Rectangle : public Shape
{
private:
    double _height;
    double _width;

public:
    Rectangle() : _height(0), _width(0){};
    Rectangle(string name, string color, double h, double w) : Shape(name, color), _height(h), _width(w) {};
    void calcSize() override
    {
        Shape::_size = _height * _width;
    }
};

#endif // RECTANGLE_H