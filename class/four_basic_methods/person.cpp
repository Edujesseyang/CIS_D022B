#include "person.h"
#include <iostream>
// there are four basic methods in a class

int Person::count = 0;
Person::Person() // 1. default constructor.
{
    count++;
    m_name = "n/a";
    m_age = 0;
    m_race = "n/a";
}
Person::~Person() // 2. default destructor.
{
    // no dynamic memory(pointer) to delete
    count--;
}

Person::Person(const Person &p) // 3. copy constructor.
{
    count++;
    m_name = p.m_name;
    m_age = p.m_age;
    m_race = this->m_race; // "this->"" is same as p.
}
Person &Person::operator=(const Person &p) // 4. assignment operator.
{
    m_name = p.m_name;
    m_age = p.m_age;
    m_race = p.m_race;
    return *this;
}

// Other constructors
Person::Person(std::string name_i, int age_i, std::string race_i)
{
    count++;
    m_name = name_i;
    m_age = age_i;
    m_race = race_i;
}

// no word friend in .cpp; no pointer this
std::ostream &operator<<(std::ostream &os, const Person &p)
{
    os << "name = " << p.m_name << "\nage = " << p.m_age << "\nrace = " << p.m_race << "\n";
}

int Person::get_count() 
{
    return count;
}
