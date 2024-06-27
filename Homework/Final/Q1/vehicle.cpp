#include <iostream>
#include <string>
#include "vehicle.h"

using namespace std;

int Vehicle::count = 0;

// constructors, destructor, parameters constructors, operators
Vehicle::Vehicle() : _color("Unknown"), _owner("Unknown"), _doors(0) { count++; };
Vehicle::~Vehicle() { count--; };
Vehicle::Vehicle(string color, string owner, int doors) : _color(color), _owner(owner), _doors(doors) { count++; };
Vehicle &Vehicle::operator=(const Vehicle &obj)
{
    if (this != &obj)
    { // Check for self-assignment
        count++;
        _color = obj.get_color(); // Access member directly using dot operator
        _owner = obj.get_owner(); // Access member directly using dot operator
        _doors = obj.get_doors(); // Access member directly using dot operator
    }
    return *this; // Return the current object
}

bool Vehicle::operator==(const Vehicle &obj)
{
    if ((this->_color == obj.get_color()) && (this->_owner == obj.get_owner()) && (this->_doors == obj.get_doors()))
    {
        return true;
    }
    else
    {
        return false;
    }
}

ostream &operator<<(ostream &os, const Vehicle &obj)
{
    os << "Vehicle information:\nColor: " << obj._color << "\nOwner: " << obj._owner << "\nNumber of Doors: " << obj._doors << '\n';
    return os;
}

// setters

void Vehicle::set(string color, string owner, int doors)
{
    _color = color;
    _owner = owner;
    _doors = doors;
};
void Vehicle::set(const Vehicle &obj)
{
    _color = obj.get_color();
    _owner = obj.get_owner();
    _doors = obj.get_doors();
};
void Vehicle::set_color(string color)
{
    _color = color;
};
void Vehicle::set_owner(string owner)
{
    _owner = owner;
};
void Vehicle::set_doors(int doors)
{
    _doors = doors;
};

// getters
string Vehicle::get_color() const
{
    return _color;
};
string Vehicle::get_owner() const
{
    return _owner;
};
int Vehicle::get_doors() const
{
    return _doors;
};

int Vehicle::get_count()
{
    return count;
};