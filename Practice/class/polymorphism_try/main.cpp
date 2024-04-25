#include <iostream>
#include <string>

class Weapon
{
protected:
    std::string _name = "Unknown Weapon";
    int _dps = 0;
    double _weight = 0.0;

public:
    Weapon(std::string name, int dps, double weight) : _name(name), _dps(dps), _weight(weight) {}
    virtual void print() const { std::cout << "Name: " << _name << "\nWeight: " << _weight << "lb.\nDPS: " << _dps; }
};

class Gun : Weapon
{
protected:
    int _range = 0;

public:
    Gun(std::string name, int dps, double weight) : Weapon::_name(name), Weapon::_dps(dps), Weapon::_weight(weight) {}
    void set_range(int range) { _range = range; }
    void print() const
    {
        Weapon::print();
        std::cout << "D/S.\nRange: " << _range << " M.\n";
    }
};

class ShotGun : Gun
{
private:
    int _ball = 0;

public:
    void set_ball(int ball) { _ball = ball; }
    void print() const
    {
        Gun::print();
        std::cout << "The are " << _ball << " in one shot. \n";
    }
};

int main()
{
    Weapon knife("Cooking Knife", 12, 0.8);
    Gun pistol("M17", 25, 1.4);
    pistol.set_range(50);
    ShotGun
}