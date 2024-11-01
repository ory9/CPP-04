#pragma once
#include "Animal.hpp"

class Dog: public Animal{
public:
    Dog();
    Dog(Dog const & Dog);
    Dog & operator = (Dog const & src);
    ~Dog();
    void makeSound() const;
};