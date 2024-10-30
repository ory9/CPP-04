#pragma once
#include <iostream>
#include <string>

class WrongAnimal{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(std::string name);
    WrongAnimal(WrongAnimal const & cat);
    WrongAnimal & operator = (WrongAnimal const & src);
    ~WrongAnimal();
    std::string getType() const;
    void makeSound() const;
};