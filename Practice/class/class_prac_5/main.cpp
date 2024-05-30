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

    vector<Animal> a_list = {a1, a2, a3, a4, a5};

    for (Animal a : a_list)
    {
        cout << a << endl;
    }
    std::cout << a5.get_count() << '\n';

    cout << "******************************************************************\n";
    Pet p1;
    Pet p2("dog", 'm', "Dodo", "Jesse");
    Pet p3(p2);
    Pet p4 = p3;
    Pet p5;
    cin >> p5;
    vector<Pet> p_list = {p1, p2, p3, p4, p5};

    for (Pet p : p_list)
    {
        cout << p << endl;
    }
    std::cout << p5.get_count() << '\n';

    cout << "******************************************************************\n";
    Cat c1;
    Cat c2('m', "Klee", "Jesse", "black");
    Cat c3(c2);
    Cat c4 = c3;
    Cat c5;
    cin >> c5;
    vector<Cat> c_list = {c1, c2, c3, c4, c5};

    for (Cat c : c_list)
    {
        cout << c << endl;
    }
    std::cout << c5.get_count() << '\n';

    return 0;
}