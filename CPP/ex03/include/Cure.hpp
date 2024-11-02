#pragma once
#include <iostream>
#include <string>
#include "ICharacter.hpp"

using std::string;

class Cure : public AMateria{
private:
    string _name;
public:
    Cure();
    Cure(const Cure & src);
    ~Cure();
    Cure & operator = (const Cure & src);
    void setName(string name);
    string getName() const;
    void use(ICharacter& target);
};