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
    Grad g3(g2);
    g1 = g3;

    

    return 0;
}