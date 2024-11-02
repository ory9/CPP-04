#include "../include/ICharacter.hpp"

Character::Character(){
    std::cout << "Character: Default Constructor Called" <<std::endl;
}

Character &Character::operator = (const Character & src){
    if (this != &src)
    {
        int i = 0;
        this->_name = src._name;
        this->_idx = src._idx;
        while(i++ < 4)
            this->_inv[i] = src._inv[i];
    }
    return *this;
}

Character::Character(const Character &src){
    *this = src;
}

Character::Character::~Character(){
    std::cout << "Character: Destructor Called" <<std::endl;
}

std::string const & Character::getName() const{
    return this->_name;
}

void Character::equip(AMateria* m){
    std::cout << "Character: Equip function Called" <<std::endl;
}

void Character::unequip(int idx){
    std::cout << "Character: Unequip function Called" <<std::endl;
}

void Character::use(int idx, ICharacter& target){
    std::cout << "Character: use function Called" <<std::endl;
}