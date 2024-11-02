#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class IMateriaSource
{
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource{
public:
    MateriaSource();
    MateriaSource & operator = (const MateriaSource & src);
    MateriaSource(const MateriaSource &src);
    virtual ~MateriaSource();
    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
private:
    string      _type;
    AMateria*   _loc[4];
};