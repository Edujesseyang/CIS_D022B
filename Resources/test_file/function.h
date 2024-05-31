#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>
#include <string>
#include <stdexcept>

int factorial(int input)
{
    if (input < 0)
    {
        throw std::invalid_argument("Invalid Parameters Error");
    }

    else if (input > 1)
    {
        return input * (factorial(input - 1));
    }
    else if (input == 1 || input == 0)
    {
        return 1;
    }
}
#endif // FUNCTION_H