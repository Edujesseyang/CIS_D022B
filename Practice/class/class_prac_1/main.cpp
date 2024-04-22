#include <iostream>
#include <string>

#include "Cat.h"

int main(void)
{
    Cat lucky("Lucky", 5, 12.3, "Gray", true);
    Cat sushi;  // no parameter, no ().  "sushi()" is wrong.

    std::cout << "Lucky: \n"
              << lucky << '\n';
    std::cout << '\n';
    std::cout << "sushi: \n"
              << sushi << '\n';
    return 0;
}