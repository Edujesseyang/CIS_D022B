#include <iostream>
#include <string>
#include <stdexcept>
#include "function.h"

void tester(int input, int output)
{

    if (input < 0)
    {
        std::cout << " \nInvalid input test\n";
        std::cout << "Input:              " << input << '\n';
        std::cout << "Expect output:      " << "Error" << '\n';

        int error_result = 0;
        try
        {
            error_result = factorial(-1);
        }
        catch (const std::invalid_argument &e)
        {
            std::cout << "Actual output:      " << "Error" << '\n';
            std::cout << "Test result:        ";
            std::cout << "\033[32m" << "Pass" << "\033[0m" << '\n';
        }
        catch (...)
        {
            std::cout << "Actual output:      " << output << '\n';
            std::cout << "Test result:        ";
            std::cout << "\033[31m" << "Fail" << "\033[0m" << '\n';
        }
    }
    else
    {
        int result = factorial(input);
        std::cout << "Testing case:\n";
        std::cout << "Input:              " << input << '\n';
        std::cout << "Expect output:      " << output << '\n';
        std::cout << "Actual output:      " << result << '\n';
        std::cout << "Test result:        ";
        if (result == output)
        {
            std::cout << "\033[32m" << "Pass" << "\033[0m" << '\n';
        }
        else
        {
            std::cout << "\033[31m" << "Fail" << "\033[0m" << '\n';
        }
    }

    std::cout << '\n';
}

int main()
{
    std::cout << "******************** int factorial(int) **********************\n";
    tester(0, 1);
    tester(1, 1);
    tester(2, 2);
    tester(3, 6);
    tester(4, 24);
    tester(5, 120);
    tester(6, 720);
    tester(7, 5040);
    tester(-1, 32);
    tester(-42, 3342);
    tester(-13, 334342);
    tester(1, 32);

    return 0;
}