#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{
public:
    Character();
    Character(std::string name);
    Character & operator = (const Character & src);
    Character(const Character &src);
    ~Character();
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    AMateria* clone() const;
    void use(int idx, ICharacter& target);
private:
    std::string      _name;
    int              _idx;
    AMateria        *_inv[4];
};