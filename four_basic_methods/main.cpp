#include <iostream>
#include "person.h"

int main(void)
{
    Person p_1;
    std::cout << "person 1:\n";
    std::cout << "Person1: " << p_1 << ".\n";
  
    Person p_2("Jesse", 24, "Aisan");
    std::cout << "Person2: \n" << p_2 << ".\n";

    std::cout << "There are " << Person::get_count() << " objects are created.";

    return 0;
}