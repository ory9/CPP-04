#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
public:
    Cat();
    Cat(Cat const & cat);
    Cat & operator = (Cat const & src);
    ~Cat();
    virtual void makeSound() const;
    string getIdea(int index) const;
    void setIdea(int index, string idea);
private:
    Brain *CatBrain;
};
