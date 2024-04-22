#include <iostream>
#include <string>

#include "Cat.h"

Pet::Pet() : _name("N/A"), _gender("N/A"), _age(0){};
Pet::Pet(std::string name) : _name(name), _gender("N/A"), _age(0){};
Pet::Pet(std::string name, std::string gender) : _name(name), _gender(gender), _age(0){};
Pet::Pet(std::string name, int age) : _name(name), _gender("N/A"), _age(age){};

Pet::Pet(std::string name, std::string gender, int age) : _name(name), _gender(gender), _age(age){};
Pet::Pet(std::string name, int age, std::string gender) : _name(name), _age(age), _gender(gender){};

bool Pet::set_name(std::string name)
{
    if (name == "")
    {
        return false;
    }
    _name = name;
    return true;
}

bool Pet::set_gender(std::string gender)
{
    if (gender == "")
    {
        return false;
    }
    _gender = gender;
    return true;
}

bool Pet::set_age(int age)
{
    if (age <= 0)
    {
        return false;
    }
    _age = age;
    return true;
}

std::string Pet::get_info() const
{
    std::string info = "Name: " + _name + ".\nAge: " + std::to_string(_age) + ".\nGender: " + _gender + ".\n";
    return info;
}