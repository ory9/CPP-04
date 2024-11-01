#pragma once
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
public:
    WrongCat();
    WrongCat(WrongCat const & cat);
    WrongCat & operator = (WrongCat const & src);
    ~WrongCat();
    void makeSound() const;
private:
};