#include <random>
#include <iostream>

int main ()
{
    std::random_device rd;
    std::default_random_engine generator(rd());
    std::uniform_int_distribution<int> distribution(0, 100);

    for (int i = 0; i < 100; i++)
    {
        std::cout << distribution(generator) << std::endl;
    }

    return 0;
}
