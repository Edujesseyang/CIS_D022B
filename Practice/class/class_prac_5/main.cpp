#include <iostream>
#include <string>
#include <vector>
#include "animal.h"
#include "pet.h"
#include "cat.h"
using std::cout;

int main()
{

    Animal a1;             // default
    Animal a2("pig", 'f'); // constructor
    Animal a3(a2);         // copy
    Animal a4 = a3;        // = operator
    Animal a5;
    cin >> a5;

    vector<Animal> list = {a1, a2, a3, a4, a5};

    for (Animal a : list)
    {
        cout << a << endl;
    }
    std::cout << a5.get_count() << '\n';

    return 0;
}