#include "../include/Character.hpp"
#include "../include/ICharacter.hpp"
#include "../include/AMateria.hpp"

Character::Character(): _name("unamed"), _idx(0){
    std::cout << "Character: Default Constructor Called" <<std::endl;
}

Character &Character::operator = (const Character & src){
    std::cout << "Character: Copy Assignment Operator Called" <<std::endl;
    if (this != &src)
    {
        int i = -1;
        this->_name = src.getName();
        this->_idx = 0;
        if (this->_inv[i])
        {
            for (int i = 0; i < 4; i++)
                delete this->_inv[i];
        }
        while(++i < 4)
        {
            this->_inv[i] = src._inv[i];
            if (src._inv[i])
                this->_idx++;
        }
    }
    return *this;
}

Character::Character(std::string name): _name(name){
    for (int i = 0; i < 4; i++)
        this->_inv[i] = NULL;
}

Character::Character(const Character &src){
    *this = src;
    std::cout << "Character: Copy Constructor Called" <<std::endl;
}

Character::Character::~Character(){
    std::cout << "Character: Destructor Called" <<std::endl;
    for (int i = 0; i < _idx; i++)
        delete _inv[i];
}

std::string const & Character::getName() const{
    return this->_name;
}

void Character::equip(AMateria* m){
    if (this->_idx < 4)
        this->_inv[_idx++] = m;
    else
        std::cout << "equiping Inventory at: " << m->getType() <<" is out of Space." <<std::endl;
}

void Character::unequip(int idx){
    if (idx >= 0 && idx < this->_idx)
    {
        idx++;
        while(idx < this->_idx)
        {
            this->_inv[idx - 1] = this->_inv[idx];
            idx++;
        }
        this->_idx--;
    }
    else
        std::cout << "Error: Ocurred during Unequiping!" <<std::endl;
}

void Character::use(int idx, ICharacter& target){
    if (idx >= 0 && idx < this->_idx)
   {
        std::cout <<getName() << std::endl;
         // this->_inv[idx]->use(target);
   
   }
    else
    {   
        std::cout << "Error: Occurred in Use" << std::endl;
    }
}
