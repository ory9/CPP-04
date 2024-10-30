
#include "Animal.hpp"
#include "Cat.hpp"

//============ Constructor Start ============
Cat::Cat(): type("Cat")
{
    std::cout <<"Cat Default Constructor called" <<std::endl;
}

Cat::Cat(std::string name): type("Cat")
{
    std::cout <<name <<"Cat Parameterized Constructor called" <<std::endl;
}

Cat::Cat(Cat const & cat): Animal()
{
    std::cout<<"Copy Constructor called" <<std::endl;
    *this = cat;
}
//============ Constructor End ============

//============ Destructor Start ============
Cat::~Cat(){
    std::cout << "Cat Destructor Called" << std::endl;
}
//============ Destructor Start ============

//============ Copy Assigment Operator Start ============
Cat & Cat::operator = (Cat const & src)
{
    if (this != &src)
    {
        this->type = src.type;
    }
    return *this;
}
//============ Copy Assigment Operator End ============

//============ Member Functions Start ============
void Cat::makeSound() const{
    std::cout << "*** Cats make meows  Sound ***" << std::endl;
}

std::string  Cat::getType() const
{
    return this->type;
}
//============ Member Functions End ============
