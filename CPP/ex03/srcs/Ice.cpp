#include "../include/Ice.hpp"

Ice::Ice(): _name("Unamed"){
    std::cout << "Ice Default Constructor is Called." << std::endl;
}

Ice::Ice(const Ice & src){
    *this = src;
}

Ice::~Ice(){
    std::cout << "Ice Destructor is Called" << std::endl;
}

Ice &Ice::operator = (const Ice & src){
    if (this != &src)
    {
        this->_name = src._name;
    }
    return *this;
}

void Ice::setName(string name){
    _name = name;
}

string Ice::getName() const{
    return _name;
}

void Ice::use(ICharacter & obj){
    std::cout << "Ice:" << "* heals "<< _name<<" wounds *" << std::endl;
}

// AMateria* clone() const {
//     return AMateria;
// }