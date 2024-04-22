#ifndef PAT_H
#define PAT_H

#include <string>

class Pet
{
private:
    std::string _name;
    std::string _gender;
    int _age;

public:
    // constructor
    Pet();
    Pet(std::string name);
    Pet(std::string name, std::string gender);
    Pet(std::string name, int age);
    Pet(std::string name, std::string gender, int age);
    Pet(std::string name, int age, std::string gender);

    // destructor (default)
    
    // setter
    bool set_name(std::string name);
    bool set_gender(std::string gender);
    bool set_age(int age);

    // getter
    std::string get_info() const;
};

#endif // PAT_H