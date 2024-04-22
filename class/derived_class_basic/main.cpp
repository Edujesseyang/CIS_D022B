#include <iostream>
#include <string>

#include "Pet.h"
#include "Cat.h"

int main()
{
    Pet pet1;
    std::cout << pet1.get_info() << '\n';
    Pet pet2("Dodo");
    std::cout << pet2.get_info() << '\n';
    Pet pet3("Dali", "Female");
    std::cout << pet3.get_info() << '\n';
    Pet pet4("Sharline", 5);
    std::cout << pet4.get_info() << '\n';
    Pet pet5("Rax", 3, "male");
    std::cout << pet5.get_info() << '\n';
    Pet pet6("Pipo", "male", 4);
    std::cout << pet6.get_info() << '\n';

    Cat cat1;
    cat1.set_age(13);
    cat1.set_name("Lucky");
    cat1.set_gender("male");
    cat1.set_type("American Short Hair");
    std::cout << cat1.get_info();
    std::cout << "Type: " << cat1.get_type() << '\n';

    return 0;
}