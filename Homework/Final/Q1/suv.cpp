#include <iostream>
#include <string>
#include "vehicle.h"
#include "suv.h"

SUV::SUV() : Vehicle(), _mpg(0.0) { count++; };
SUV::SUV(string color, string owner, int doors, double mpg) : Vehicle(color, owner, doors), _mpg(mpg) { count++; };
SUV::~SUV() { count--; };

// operators
SUV &SUV::operator=(const SUV &obj)
{
    count++;
    set(obj);
};
bool SUV::operator==(const SUV &obj)
{
    if ((this->_color == obj.get_color()) && (this->_owner == obj.get_owner()) && (this->_doors == obj.get_doors()) && (this->_mpg == obj.get_mpg()))
    {
        return true;
    }
    else
    {
        return false;
    }
};
ostream &operator<<(ostream &os, const SUV &obj)
{
    os << "SUV information:\nColor: " << obj.get_color() << "\nOwner: " << obj.get_owner() << "\nNumber of Doors: " << obj.get_doors() << "\nMPG: " << obj.get_mpg() << '\n';
    return os;
};

// setters
void SUV::set_mpg(double mpg)
{
    _mpg = mpg;
};
void SUV::set(string color, string owner, int doors, double mpg)
{
    this->set_color(color);
    this->set_owner(owner);
    this->set_doors(doors);
    _mpg = mpg;
};
void SUV::set(const SUV &obj)
{
    this->set_color(obj.get_color());
    this->set_owner(obj.get_owner());
    this->set_doors(obj.get_doors());
    _mpg = obj.get_mpg();
};

// getters
double SUV::get_mpg() const
{
    return _mpg;
};