#include <iostream>
#include <string>
#include "myfunc.h"

int main(void)
{
    int int_x = 10, int_y = 5;
    double dbl_x = 10.5, dbl_y = 0.5;
    char char_x = 'x', char_y = 'y';

    // Here string is not working for this program, because the type "string" is in fact an array in C++
    // std::string str_x = "How are you?", str_y = "What's up?";

    std::cout << "Test plus\n";
    std::cout << plus(int_x, int_y) << '\n';
    std::cout << plus(dbl_x, dbl_y) << '\n';
    std::cout << plus(char_x, char_y) << '\n';
    // std::cout << plus(str_x, str_y) << '\n';    <-- not work

    std::cout << "Test minors\n";
    std::cout << minors(int_x, int_y) << '\n';
    std::cout << minors(dbl_x, dbl_y) << '\n';
    std::cout << minors(char_x, char_y) << '\n';
    // std::cout << minors(str_x, str_y) << '\n';

    std::cout << "Test mutiple\n";
    std::cout << mutiple(int_x, int_y) << '\n';
    std::cout << mutiple(dbl_x, dbl_y) << '\n';
    std::cout << mutiple(char_x, char_y) << '\n';
    // std::cout << mutiple(str_x, str_y) << '\n';

    std::cout << "Test divide\n";
    std::cout << divide(int_x, int_y) << '\n';
    std::cout << divide(dbl_x, dbl_y) << '\n';
    std::cout << divide(char_x, char_y) << '\n';
    // std::cout << divide(str_x, str_y) << '\n';

    return 0;
}