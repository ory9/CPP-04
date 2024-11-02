#include "../include/AMateria.hpp"

AMateria::AMateria(std::string const & type){
    _type = type;
    std::cout << "AMateria Parameterized Constructor Called" <<std::endl;
}

AMateria::AMateria(){
    std::cout << "AMateria Constructor Called" <<std::endl;
}

AMateria::AMateria(const AMateria & src){
    *this = src;
}

AMateria::~AMateria(){
    std::cout << "AMateria DeConstructor Called" <<std::endl;
}

AMateria &AMateria::operator = (const AMateria & src){
    if (this != &src)
    {
        this->_type = src._type;
    }
    return *this;
}
    
std::string const & AMateria::getType() const{
    return this->_type;
}

void use(ICharacter& target){
    std::cout << "Default Value Printed" << std::endl;
}