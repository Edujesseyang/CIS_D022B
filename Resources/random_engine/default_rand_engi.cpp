#include <random>
#include <iostream>

int main()
{
    std::random_device rd;                                   // random_device can get a real random num, use it as a seed for default random engine.
    std::default_random_engine generator(rd());              // seed the default random engine.
    std::uniform_int_distribution<int> distribution(0, 100); // define a distribution with type and bounds.

    int a = distribution(generator);    // define an int and give it a rand val.
    std::cout << a << '\n';

    return 0;
}
