
#include "Animal.hpp"

//============ Constructor Start ============
Animal::Animal(): type("unamed")
{
    std::cout<<"Animal Default Constructor called" <<std::endl;
}

Animal::Animal(std::string name): type("unamed")
{
    std::cout <<name << " Parameterized Constructor called " << std::endl;
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
        this->type = src.type;
    }
    return *this;
}
//============ Copy Assigment Operator End ============

//============ Member Functions Start ============
std::string  Animal::getType() const
{
    return type;
}

void Animal::makeSound() const{
    std::cout << "*** Unkown Animal makes Unamed Sound ***" << std::endl;
}
//============ Member Functions End ============
