#include "../include/AMateria.hpp"

AMateria::AMateria(){
    std::cout << "AMateria Default Constructer is Called" << std::endl;
}

AMateria::AMateria(std::string const & type){
    _type = type;
    std::cout << "AMateria Parameterized Constructer is Called" << std::endl;
}

AMateria::AMateria(const AMateria & src){
    *this = src;
    std::cout << "AMateria Copy Constructer is Called" << std::endl;
}

AMateria::~AMateria(){
    std::cout << "AMateria Destructer is Called" << std::endl;
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
