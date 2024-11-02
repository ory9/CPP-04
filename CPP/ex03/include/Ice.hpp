#pragma once
#include <iostream>
#include <string>
#include "ICharacter.hpp"

using std::string;

class Ice : public AMateria{
private:
    string _name;
public:
    Ice();
    Ice(const Ice & src);
    ~Ice();
    Ice & operator = (const Ice & src);
    void setName(string name);
    string getName() const;
    void use(ICharacter& target);
};