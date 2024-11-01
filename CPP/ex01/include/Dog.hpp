#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
public:
    Dog();
    Dog(Dog const & Dog);
    Dog & operator = (Dog const & src);
    ~Dog();
    void makeSound() const;
    string getIdea(int index) const;
    void setIdea(int index, string idea);
private:
    Brain *DogBrain;
};