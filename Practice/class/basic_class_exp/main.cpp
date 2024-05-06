#include <iostream>
#include <string>
#include "cat.h"

int main(void)
{
    // *******************  test set 1 ****************
    std::cout << "******* test case 1 *************\n";
    Cat cat1;
    Cat cat2("lucky", 5, "gray");
    cat1.set("Sushi", 12, "brown");
    cat1.printInfo();
    std::cout << cat2;

    // **************** test set 2 *******************
    std::cout << "******* test case 1 *************\n";
    Cat cat3;
    Cat cat4;
    cat3.setName("Klee");
    cat3.setAge(4);
    cat3.setColor("blue");
    cat4 = cat3;
    std::cout << cat3.getInfo() << '\n';
    Cat cat5(cat4);
    std::cout << cat5 << '\n';
    std::cout << "last cat:"
              << "\nName: " << cat5.getName()
              << "\nAge: " << cat5.getAge()
              << "\nColor: " << cat5.getColor()
              << '\n';
    std::cout << "\n\ncat counts: \n";
    std::cout << "cat1: " << cat1.getCount() << '\n';
    std::cout << "cat2: " << cat2.getCount() << '\n';
    std::cout << "cat3: " << cat3.getCount() << '\n';
    std::cout << "cat4: " << cat4.getCount() << '\n';
    std::cout << "cat5: " << cat5.getCount() << '\n';
    return 0;
}