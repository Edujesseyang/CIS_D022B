#include <iostream>
#include <string>

class Food
{
private:
    std::string _name = "N/A";
    std::string _taste = "Unknown";
    int _calories = 0;

public:
    Food() = default;
    Food(std::string name) : _name(name) {}

    void set_name(std::string name) { _name = name; }
    void set_taste(std::string taste) { _taste = taste; }
    void set_calories(int calories) { _calories = calories; }

    std::string get_name() { return _name; }
    std::string get_taste() { return _taste; }
    int get_calories() { return _calories; }

    bool operator==(const Food &that) { return (this->_calories == that._calories); }
    void print() { std::cout << _name << ": \nCalories: " << _calories << "\nTaste: " << _taste << '\n'; }
};

int main()
{
    Food myFood;
    myFood.print();

    Food pizza("Pizza");
    pizza.set_calories(560);
    pizza.set_taste("Soft, cheesy, salty.");
    pizza.print();

    return 0;
}
