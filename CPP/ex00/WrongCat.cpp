
#include "WrongCat.hpp"

//============ Constructor Start ============
WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout <<"WrongCat Default Constructor called" <<std::endl;
}

WrongCat::WrongCat(std::string name)
{
    std::cout << name << "Parameterized Constructor called " << std::endl;
}

WrongCat::WrongCat(WrongCat const & WrongCat): WrongAnimal(WrongCat.type)
{
    std::cout<<"Copy Constructor called" <<std::endl;
    *this = WrongCat;
}
//============ Constructor End ============

//============ Destructor Start ============
WrongCat::~WrongCat(){
    std::cout << "WrongCat Destructor Called" << std::endl;
}
//============ Destructor Start ============

//============ Copy Assigment Operator Start ============
WrongCat & WrongCat::operator = (WrongCat const & src)
{
    if (this != &src)
    {
        this->type = src.type;
    }
    return *this;
}
//============ Copy Assigment Operator End ============

//============ Member Functions Start ============
void WrongCat::makeSound() const{
    std::cout << "....... Wrong Cat makes Growling Sound ......" << std::endl;
}
//============ Member Functions End ============
