#include <string>

class Cat
{
private:
    std::string _name;
    int _age;
    double _weight;
    std::string _color;
    bool _spay;

public:
    // constructor

    Cat(std::string name = "N/A", int age = 0, double weight = 0.0, std::string color = "N/A", bool spay = false);

    // getters
    std::string get_name() const;
    int get_age() const;
    double get_weight() const;
    std::string get_color() const;
    bool get_spay() const;

    // setters
    bool set_name(std::string name);
    bool set_age(int age);
    bool set_weight(double weight);
    bool set_color(std::string color);
    bool set_spay(bool spay);

    // operators
    bool operator==(Cat that);

    // printer
    friend std::ostream &operator<<(std::ostream &os, Cat const &cat); // format: friend return-type function-name(parameter-list);
    // Here for friend opr overload, use & for all parts.
};
