#pragma once
#include "AMateria.hpp"

class Cure : public AMateria {
private:
    std::string _name;
public:
    Cure();
    Cure(const Cure & src);
    void setName(std::string name);
    ~Cure();
    Cure & operator = (const Cure & src);
    std::string const & getType() const; //Returns the materia type
    AMateria* clone() const;
    void use(ICharacter& target);
};          