#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string>

#include "Pet.h"

class Cat : public Pet
{
private:
    std::string _type;

public:
    bool set_type(std::string type);
    std::string get_type() const;
};

#endif //CAT_H