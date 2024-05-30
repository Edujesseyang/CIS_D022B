#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class Animal
{
protected:
    string _type = "N/A";
    char _gender = '?';

public:
    Animal();
    Animal(const string &type, char gender);
    Animal(const Animal &obj);
    ~Animal();

    // getters
    string get_type() const;
    char get_gender() const;

    // setters
    void set_type(const string &type);
    void set_gender(char gender);
    void set_animal(const string &type, char gender);

    // operators
    Animal &operator=(const Animal &obj);
    friend ostream &operator<<(ostream &OS, const Animal &obj);
    friend istream &operator>>(istream &IS, Animal &obj); // For cin, obj can't be const

    // static counter
    static int count;
    int get_count();
};

#endif // ANIMAL_H