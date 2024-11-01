#pragma once
#include <iomanip>
#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "MateriaSource.hpp"

class AMateria
{
protected:
//need to add member funcctions.
public:
AMateria(std::string const & type);
//need to add member funcctions.
std::string const & getType() const; //Returns the materia type
virtual AMateria* clone() const = 0;
virtual void use(ICharacter& target);
};