#pragma once
#include "WrongAnimal.hpp"
#include "Animal.hpp"

class WrongCat: public WrongAnimal{
public:
    WrongCat();
    WrongCat(std::string name);
    WrongCat(WrongCat const & cat);
    WrongCat & operator = (WrongCat const & src);
    virtual ~WrongCat();
    void makeSound() const;
private:
};