#pragma once
#include "Animal.hpp"

class Dog: public Animal{
public:
    Dog();
    Dog(std::string name);
    Dog(Dog const & Dog);
    Dog & operator = (Dog const & src);
    ~Dog();
    void makeSound() const;
    std::string getType() const;
    void setType(std::string name);
private:
    std::string type;
};