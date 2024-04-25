#include <iostream>
#include <string>
#include <vector>

class Weapon
{
protected:
    std::string _name = "Unknown Weapon";
    int _dps = 0;
    double _weight = 0.0;
    std::string _detail = "Unknown";

public:
    Weapon(std::string name, int dps, double weight) : _name(name), _dps(dps), _weight(weight) {}
    void set_detail(std::string detail) { _detail = detail; }
    virtual void print() const { std::cout << "Name:\t " << _name << "\nWeight:\t " << _weight << " lb.\nDPS:\t " << _dps << " D/S.\nDetail: " << _detail << '\n'; }
};

class Gun : public Weapon
{
protected:
    int _range = 0;

public:
    Gun(std::string name, int dps, double weight, int range) : Weapon(name, dps, weight), _range(range) {}
    void set_range(int range) { _range = range; }
    void print() const
    {
        Weapon::print();
        std::cout << "Range:\t " << _range << " M.\n";
    }
};

class ShotGun : public Gun
{
private:
    int _ball = 0;

public:
    ShotGun(std::string name, int dps, double weight, int range, int ball) : Gun(name, dps, weight, range), _ball(ball) {}
    void set_ball(int ball) { _ball = ball; }
    void print() const
    {
        Gun::print();
        std::cout << "The are " << _ball << " ballets in one shot. \n";
    }
};

void print_list(std::vector<Weapon *> weapon_list)
{
    std::cout << "The character equipped weapon:\n";
    for (size_t i = 0; i < weapon_list.size(); ++i)
    {
        weapon_list[i]->print();   // This is the way to loop pointer type vector.
        std::cout << "\n\n";
    }
}

int main()
{
    Weapon knife("Cooking Knife", 12, 0.8);
    knife.set_detail("A small cooking knife, 4 inches long, not sharp anymore. Can be use to stab, slash, and throw to the zombies.");
    Gun pistol("M17", 25, 1.4, 50);
    pistol.set_detail("An old military type pistol, 9MM, 18 rounds full load, semi-auto action. COP needed.");
    ShotGun shot_gun("Remington 870", 120, 5.5, 20, 8);
    shot_gun.set_detail("A brand new hunting shot gun, heavy and powerful. Good weapon.");

    std::vector<Weapon *> my_weapons;
    my_weapons.push_back(&knife);
    my_weapons.push_back(&pistol);
    my_weapons.push_back(&shot_gun);

    print_list(my_weapons);

    return 0;
}