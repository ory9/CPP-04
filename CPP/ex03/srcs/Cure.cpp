#include "../include/Cure.hpp"

Cure::Cure(): _name("Unamed"), AMateria(){
    std::cout << "Cure Default Constructor is Called." << std::endl;
}

Cure::Cure(const Cure & src): AMateria(src){
    *this = src;
}

Cure::~Cure(){
    std::cout << "Cure Destructor is Called" << std::endl;
}

Cure &Cure::operator = (const Cure & src){
    if (this != &src)
        this->_name = src._name;
    return *this;
}

void Cure::setName(std::string name){
    _name = name;
}

std::string const & Cure::getType() const{
    return _name;
}

void Cure::use(ICharacter & target){
    std::cout << "Cure:" <<"* heals " << target.getName() <<" wounds *" << std::endl;
}

AMateria* Cure::clone() const{
    return new Cure(*this);
}

