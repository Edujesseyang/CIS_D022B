#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string>
#include "animal.h"
#include "pet.h"
using namespace std;

class Cat : public Pet
{
private:
    string _color = "unspecific";

public:
    Cat();
    Cat(char gender, const string &name, const string &owner, const string &color);
    Cat(const Cat &obj);
    ~Cat();

    void set_color(const string &color);
    void set_cat(const string &type, char gender, const string &name, const string &owner, const string &color);

    string get_color() const;

    Cat &operator=(const Cat &obj);
    friend istream &operator>>(istream &is, Cat &obj);
    friend ostream &operator<<(ostream &os, Cat &obj);

    static int count;
    int get_count();
};

#endif // CAT_H