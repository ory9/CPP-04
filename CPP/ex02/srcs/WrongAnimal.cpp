#include "../include/Animal.hpp"
#include "../include/WrongAnimal.hpp"

//============ Constructor Start ============
WrongAnimal::WrongAnimal() : type("unamed")
{
    std::cout<<"WrongAnimal Default Constructor called" <<std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & cat)
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
        this->type = src.getType();
    }
    return *this;
}
//============ Copy Assigment Operator End ============

//============ Member Functions Start ============
string  WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::setType(string name){
    this->type = name;
}
//============ Member Functions End ============
