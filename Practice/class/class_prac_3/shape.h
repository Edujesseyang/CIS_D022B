#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>
using std::string;
using std::cout;
class Shape
{
protected:
    string _name;
    double _size = 0;
    string _color;

public:
    Shape() : _name("N/A"), _color("N/A"){};
    Shape(string name, string color) : _name(name), _color(color){};
    bool setName(string name)
    {
        if (name != "")
        {
            Shape::_name = name;
            return true;
        }
        return false;
    }
    bool setColor(string color)
    {
        if (color != "")
        {
           Shape:: _color = color;
            return true;
        }
        return false;
    }

    string getName() { return _name; };
    string getColor() { return _color; };
    double getSize() { return _size; };
    virtual void calcSize() = 0;
    virtual void printInfo() 
    {
        cout << "Name:\n" << Shape::_name << "\nColor:\n" << Shape::_color << '\n';
    };
};

#endif // SHAPE_H