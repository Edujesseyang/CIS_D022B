#include <iostream>
#include <string>

#include "member.h"
#include "leader.h"

using std::cout;

int main()
{
    Leader character1("Jesse", "Tank", 8, 7);
    character1.printInfo();

    int power = character1.calcPower();
    character1.printInfo();

    return 0;
}