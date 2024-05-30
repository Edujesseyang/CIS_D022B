#include <iostream>
#include <vector>
#include <iterator>
#include "person.h"
#include "student.h"
#include "grad.h"

using namespace std;

int main()
{
    Grad g1;
    Grad g2("Jesse", 35, "CS", 2, "What");
    g2.set("you", 24, "#43", 2, "www");
    g1 = g2;
    Grad g3;
    g3.set(g2);

    Grad g4(g3);

    Student s1;
    cout << s1;

    cout << g1;
    cout << g2;
    cout << g3;
    cout << g4;

    return 0;
}