#pragma once
#include <iostream>

template <typename T>
T plus(T &x, T &y)
{
    return x + y;
}

template <typename T>
T minors(T &x, T &y)
{
    return x - y;
}

template <typename T>
T mutiple(T &x, T &y)
{
    return x * y;
}

template <typename T>
T divide(T &x, T &y)
{
    if (y == 0)
    {
        std::cerr << "Error, divided by 0\n";
        throw std::invalid_argument("Division by zero");
    }
    else
    {
        return x / y;
    }
}