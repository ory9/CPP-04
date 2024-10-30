#pragma once
#include <iostream>
#include <string>

class Animal{
protected:
    std::string type;
public:
    Animal();
    Animal(Animal const & cat);
    Animal(std::string name);
    Animal & operator = (Animal const & src);
    virtual ~Animal();
    std::string getType() const;
    virtual void makeSound() const;
};
