#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <string>
#include "shape.h"

using std::string;

class Rectangle : public Shape
{
protected:
    double _height;
    double _width;

public:
    Rectangle() : _height(0), _width(0){};
    Rectangle(string name, string color, double h, double w) : Shape(name, color), _height(h), _width(w){};
    void setHeight(double h) { _height = h; };
    void setWidth(double w) { _width = w; };
    void calcSize() override
    {
        Shape::_size = _height * _width;
    }

    void printInfo() override
    {
        Shape::printInfo();
        cout << "Size:\n"
             << _height << " * " << _width << "\nArea:\n"
             << Shape::_size << '\n';
    };
};

#endif // RECTANGLE_H