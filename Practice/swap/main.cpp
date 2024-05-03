#include <iostream>

void swap(int &x, int &y);

int main()
{
    int a = 1, b = 24;
    std::cout << a << ' ' << b << '\n';

    swap(a, b);
    std::cout << a << ' ' << b << '\n';

    return 0;
}

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}