
#include "WrongAnimal.hpp"

//============ Constructor Start ============
WrongAnimal::WrongAnimal() : type("unamed")
{
    std::cout<<"WrongAnimal Default Constructor called" <<std::endl;
}

WrongAnimal::WrongAnimal(std::string name)
{
    std::cout <<name << "Parameterized Constructor called " << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & cat) : type(cat.type)
{
    std::cout<<"Copy Constructor called" <<std::endl;
}
//============ Constructor End ============

//============ Destructor Start ============
WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Destructor Called" << std::endl;
}
//============ Destructor Start ============

//============ Copy Assigment Operator Start ============
WrongAnimal & WrongAnimal::operator = (WrongAnimal const & src)
{
    if (this != &src)
    {
        this->type = src.type;
    }
    return *this;
}
//============ Copy Assigment Operator End ============

//============ Member Functions Start ============
std::string  WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::makeSound() const{
    std::cout << "....... Wrong Animal does not make a Sound ......" << std::endl;
}
//============ Member Functions End ============
