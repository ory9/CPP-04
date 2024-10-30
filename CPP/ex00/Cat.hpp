#pragma once
#include "Animal.hpp"

class Cat: public Animal{
public:
    Cat();
    Cat(std::string name);
    Cat(Cat const & cat);
    Cat & operator = (Cat const & src);
    ~Cat();
    void makeSound() const;
    std::string getType() const;
    std::string setType() const;
private:
    std::string type;
};
