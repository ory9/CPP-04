
#include "../include/Animal.hpp"
#include "../include/Dog.hpp"

//============ Constructor Start ============
Dog::Dog()
{
    setType("Dog");
    std::cout <<"Dog Default Constructor called" <<std::endl;
}

Dog::Dog(Dog const & Dog): Animal(Dog)
{
    std::cout<<"Copy Constructor called" <<std::endl;
    *this = Dog;
}
//============ Constructor End ============

//============ Destructor Start ============
Dog::~Dog(){
    std::cout << "Dog Destructor Called" << std::endl;
}
//============ Destructor Start ============

//============ Copy Assigment Operator Start ============
Dog & Dog::operator = (Dog const & src)
{
    if (this != &src)
    {
        this->type = src.getType();
    }
    return *this;
}
//============ Copy Assigment Operator End ============

//============ Member Functions Start ============
void Dog::makeSound() const{
    std::cout << "*** Dogs make deep, rumbling barking Sound ***" << std::endl;
}
//============ Member Functions End ============
