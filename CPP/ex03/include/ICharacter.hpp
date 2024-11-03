#pragma once
#include "AMateria.hpp"
#include "MateriaSource.hpp"

class ICharacter
{
public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter{
public:
    Character();
    Character & operator = (const Character & src);
    Character(const Character &src);
    virtual ~Character();
    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
private:
    string      _name;
    int         _idx;
    AMateria    *_inv[4];
};