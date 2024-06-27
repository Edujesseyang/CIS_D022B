#pragma once

#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
protected:
    string _color = "unknown";
    string _owner = "unknown";
    int _doors = -1;

public:
    static int count;
    // constructors, destructor, parameters constructors
    Vehicle();
    virtual ~Vehicle();
    Vehicle(string color, string owner, int doors);

    // operators
    Vehicle &operator=(const Vehicle &obj);
    bool operator==(const Vehicle &obj);
    friend ostream &operator<<(ostream &os, const Vehicle &obj);

    // setters
    void set(string color, string owner, int doors);
    void set(const Vehicle &obj);
    void set_color(string color);
    void set_owner(string owner);
    void set_doors(int doors);

    // getters
    string get_color() const;
    string get_owner() const;
    int get_doors() const;
    static int get_count();
};