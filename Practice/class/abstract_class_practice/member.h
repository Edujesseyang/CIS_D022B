#ifndef MEMBER_H
#define MEMBER_H
#include <iostream>
#include <string>
using std::cout;
using std::string;

class Member
{
protected:
    string _name = "N/A";
    string _position = "N/A";

public:
    Member()
    {
        _name = "N/A";
        _position = "N/A";
    };
    Member(string name, string position) : _name(name), _position(position) {}
    virtual int calcPower() = 0;  // virtual method. defaulting = 0;
    void printInfo()
    {
        cout << "Name: " << _name << '\n';
        cout << "Position: " << _position << '\n';
    }
};

#endif // MEMBER_H