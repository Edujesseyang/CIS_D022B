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

    
};

#endif // PET_H