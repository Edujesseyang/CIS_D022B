#include <iostream>
#include <string>
#include <vector>

#include "vehicle.h"
#include "suv.h"
#include "crossover.h"

using namespace std;

int main(void)
{
    std::vector<Vehicle*> va(10);

    // Initialize Vehicle objects
    va[0] = new Vehicle("Red", "Alice", 4);
    va[3] = new Vehicle("Blue", "Bob", 2);
    va[6] = new Vehicle("Green", "Charlie", 4);
    va[9] = new Vehicle("Yellow", "Dave", 2);

    // Initialize SUV objects
    va[1] = new SUV("Black", "Eve", 4, 22.5);
    va[4] = new SUV("White", "Frank", 4, 18.0);
    va[7] = new SUV("Grey", "Grace", 4, 20.0);

    // Initialize Crossover objects
    va[2] = new Crossover("Silver", "Heidi", 4, 25.0);
    va[5] = new Crossover("Gold", "Ivan", 4, 23.0);
    va[8] = new Crossover("Bronze", "Judy", 4, 24.0);

    // Loop from 0 to 9 and print the vehicles using <<
    for (size_t i = 0; i < 10; i++)
    {
        cout << *va[i];
    }

    // call, setColor, setOwner, setDoors, for all SUVs and Crossovers
    for (int i : {1, 4, 7, 2, 5, 8})
    {
        SUV *suv = dynamic_cast<SUV *>(va[i]);
        if (suv)
        {
            suv->set_color("pink");
            suv->set_owner("myself");
            suv->set_doors(5);
        }
    }
    // type to screen Color, Owner, and Doors for all SUVs, Crossovers using cout << and getColor, getOwner, and getDoors methods.
    for (int i : {1, 4, 7, 2, 5, 8})
    {
        SUV *suv = dynamic_cast<SUV *>(va[i]);
        if (suv)
        {
            std::cout << "Color: " << suv->get_color() << "\nOwner: " << suv->get_owner() << "\nNumber of Doors: " << suv->get_doors() << '\n'
                      << std::endl;
        }
    }

    // Print to screen the static count using cout << and Vehicle::getCount()
    cout << "va[9] is the number " << va[9]->get_count() << " vehicle. \n";

    // Check if any two va[1] and va[4] are equal using == and print to screen the result.
    if (va[1] == va[4])
    {
        cout << "va[1] is same as va[4]\n";
    }
    else
    {
        cout << "va[1] is not same as va[4]\n";
    }

    // Delete the objects
    for (int i = 0; i < 10; ++i)
    {
        if (va[i] != nullptr)
        {
            delete va[i]; // This calls the destructor and deletes the object
            va[i] = nullptr;
        }
    }

    return 0;
}