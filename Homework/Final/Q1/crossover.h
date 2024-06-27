#pragma once

#include <iostream>
#include <string>
#include "vehicle.h"

using namespace std;

class Crossover : public Vehicle
{
private:
    double _mpg = 0.0;

public:
    // constructor, destructor
    Crossover();
    Crossover(string color, string owner, int doors, double mpg);
    ~Crossover();

    // operators
    Crossover &operator=(const Crossover &obj);
    bool operator==(const Crossover &obj);
    friend ostream &operator<<(std::ostream &os, const Crossover &obj);

    // setters
    void set_mpg(double mpg);
    void set(string color, string owner, int doors, double mpg);
    void set(const Crossover &obj);

    // getters
    double get_mpg() const;
};