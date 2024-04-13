#pragma once
#include <string>

class Person
{
private:
    static int count; // number of objects
    std::string m_name{"N/A"};
    int m_age{-1};
    std::string m_race{"N/A"};

public:
    // there are four basic methods in a class
    Person();                           // 1. default constructor.
    ~Person();                          // 2. default destructor.
    Person(const Person &p);            // 3. copy constructor.
    Person &operator=(const Person &p); // 4. assignment operator.

    // Other constructors
    Person(std::string name_i, int age_i, std::string race_i);
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    static int get_count();
};