#pragma once
#include <iostream>
#include <string>
using std::string;

class Animal{
protected:
    string type;
public:
    Animal();
    Animal(Animal const & cat);
    Animal & operator = (Animal const & src);
    virtual ~Animal();
    void setType(string name);
    string getType() const;
    virtual void makeSound() const;
};
