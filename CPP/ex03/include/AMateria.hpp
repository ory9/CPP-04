#pragma once
#include <iomanip>
#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "MateriaSource.hpp"

using std::string;

class AMateria
{
protected:
    string _type;
public:
    AMateria(std::string const & type);
    AMateria();
    AMateria(const AMateria & src);
    ~AMateria();
    AMateria & operator = (const AMateria & src);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};