#pragma once

#include <iostream>
#include <string>
#include "vehicle.h"

using namespace std;

class SUV : public Vehicle
{
private:
    double _mpg = 0.0;

public:
    // constructor, destructor
    SUV();
    SUV(string color, string owner, int doors, double mpg);
    ~SUV();

    // operators
    SUV &operator=(const SUV &obj);
    bool operator==(const SUV &obj);
    friend ostream &operator<<(std::ostream &os, const SUV &obj);

    // setters
    void set_mpg(double mpg);
    void set(string color, string owner, int doors, double mpg);
    void set(const SUV &obj);

    // getters
    double get_mpg() const;
};