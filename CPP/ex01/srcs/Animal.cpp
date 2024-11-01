#include "../include/Animal.hpp"

//============ Constructor Start ============
Animal::Animal(): type("Unamed")
{
    std::cout <<"Animal Default Constructor called" <<std::endl;
}

Animal::Animal(Animal const & cat){
    std::cout<<"Copy Constructor called" <<std::endl;
    *this = cat;
}
//============ Constructor End ============

//============ Destructor Start ============
Animal::~Animal(){
    std::cout << "Animal Destructor Called" << std::endl;
}
//============ Destructor Start ============

//============ Copy Assigment Operator Start ============
Animal & Animal::operator = (Animal const & src)
{
    if (this != &src)
    {
        this->type = src.getType();
    }
    return *this;
}
//============ Copy Assigment Operator End ============

//============ Member Functions Start ============
string  Animal::getType() const
{
    return this->type;
}

void Animal::setType(string name){
    this->type = name;
}

void Animal::makeSound() const{
    std::cout << "*** Unkown Animal makes Unamed Sound ***" << std::endl;
}
//============ Member Functions End ============
