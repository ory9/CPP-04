#pragma once
#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "Character.hpp"

class ICharacter;
class AMateria
{
protected:
    std::string _type;
public:
    AMateria(std::string const & type);
    AMateria();
    AMateria(const AMateria & src);
    virtual ~AMateria();
    AMateria & operator = (const AMateria & src);
    virtual std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;
};
