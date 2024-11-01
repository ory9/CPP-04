#pragma once
#include <iostream>
#include <string>
using std::string;

class WrongAnimal{
protected:
    string type;
public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const & cat);
    WrongAnimal & operator = (WrongAnimal const & src);
    virtual ~WrongAnimal();
    string getType() const;
    void setType(string name);
    virtual void makeSound() const = 0;
};