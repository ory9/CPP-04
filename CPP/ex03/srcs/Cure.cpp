#include "../include/Cure.hpp"

Cure::Cure(): _name("Unamed"){
    std::cout << "Cure Default Constructor is Called." << std::endl;
}

Cure::Cure(const Cure & src){
    *this = src;
}

Cure::~Cure(){
    std::cout << "Cure Destructor is Called" << std::endl;
}

Cure &Cure::operator = (const Cure & src){
    if (this != &src)
    {
        this->_name = src._name;
    }
    return *this;
}

void Cure::setName(string name){
    _name = name;
}

string Cure::getName() const{
    return _name;
}

void Cure::use(ICharacter & obj){
    std::cout << "Cure:" <<"* heals" <<_name <<"wounds *" << std::endl;
}

// AMateria* clone() const {
//     return AMateria;
// }