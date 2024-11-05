#pragma once
#include <string>
#include <iostream>
#include "AMateria.hpp"

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
    void printMateria() const;
    virtual AMateria* createMateria(std::string const & type);
private:
    int         _size;
    AMateria*   _arr[4];
};