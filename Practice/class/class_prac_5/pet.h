#ifndef PET_H
#define PET_H

#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

class Pet : public Animal
{
private:
    string _name = "unnamed";
    string _owner = "unknown";

public:
    Pet();
    Pet(const string &type, char gender, const string &name, const string &owner);
    Pet(const Pet &obj);
    ~Pet();

    void set_name(const string &name);
    void set_owner(const string &owner);
    void set_pet(const string &type, char gender, const string &name, const string &owner);

    string get_name() const;
    string get_owner() const;

    Pet &operator-(const Pet &obj);
    friend istream &operator>>(istream &is, Pet &obj);
    friend ostream &operator<<(ostream &os, const Pet &obj);

    static int count;
    int get_count() const;

};

#endif // PET_H