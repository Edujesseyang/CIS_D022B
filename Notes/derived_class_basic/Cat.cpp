#include <string>
#include "Cat.h"

bool Cat::set_type(std::string type)
{
    if (type.empty())
    {
        return false;
    }
    _type = type;
    return true;
}

std::string Cat::get_type() const
{
    return _type;
}