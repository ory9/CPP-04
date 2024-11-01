#pragma once
#include "Animal.hpp"

class Cat: public Animal{
public:
    Cat();
    Cat(Cat const & cat);
    Cat & operator = (Cat const & src);
    ~Cat();
    void makeSound() const;
};
