#include "../include/WrongCat.hpp"

//============ Constructor Start ============
WrongCat::WrongCat()
{
    setType("WrongCat");
    std::cout <<"WrongCat Default Constructor called" <<std::endl;
}

WrongCat::WrongCat(WrongCat const & WrongCat)
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
        this->type = src.getType();
    }
    return *this;
}
//============ Copy Assigment Operator End ============

//============ Member Functions Start ============
void WrongCat::makeSound() const{
    std::cout << "....... Wrong Cat makes Growling Sound ......" << std::endl;
}
//============ Member Functions End ============
