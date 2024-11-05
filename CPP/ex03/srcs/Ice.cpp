#include "../include/Ice.hpp"

Ice::Ice() : _name("Unamed"), AMateria(){
    std::cout << "Ice Default Constructor is Called." << std::endl;
}

Ice::Ice(const Ice & src): AMateria(src){
    *this = src;
}

Ice::~Ice(){
    std::cout << "Ice Destructor is Called" << std::endl;
}

Ice &Ice::operator = (const Ice & src){
    if (this != &src)
        this->_name = src._name;
    return *this;
}

void Ice::setName(std::string name){
    _name = name;
}

std::string Ice::getName() const{
    return _name;
}

void Ice::use(ICharacter & obj){
    std::cout << "* shoots an ice bolt at "<< obj.getName() <<" *" << std::endl;
}

AMateria* Ice::clone() const{
    return new Ice(*this);
}