#pragma once
#include "AMateria.hpp"

class Ice : public AMateria{
private:
    std::string _name;
public:
    Ice();
    Ice(const Ice & src);
    ~Ice();
    Ice & operator = (const Ice & src);
    void setName(std::string name);
    std::string getName() const;
    AMateria* clone() const;
    void use(ICharacter& target);
};