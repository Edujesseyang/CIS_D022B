#ifndef LEADER_H
#define LEADER_H

#include <iostream>
#include <string>
#include "Member.h"
using std::cout;
using std::string;

class Leader : public Member
{
private:
    int _energy;
    int _strength;
    int _power = 0;

public:
    Leader()
    {
        _energy = 0;
        _strength = 0;
    }
    Leader(string name, string position, int energy, int strength) : Member(name, position), _energy(energy), _strength(strength) {}
    int calcPower() override
    {
        _power = _strength * _energy;
        return _power;
    }

    void printInfo()
    {
        Member::printInfo();
        cout << "Level of Strength:\n" << _strength << '\n';
        cout << "Level of energy:\n" << _energy << '\n';
        cout << "Total power ability score:\n" << _power << '\n';

    }

};
#endif // LEADER_H