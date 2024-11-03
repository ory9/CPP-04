#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource(){
    std::cout << "MateriaSource: use function Called" <<std::endl;
}
MateriaSource &MateriaSource::operator = (const MateriaSource & src){
    std::cout << "MateriaSource: use function Called" <<std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &src){
    std::cout << "MateriaSource: use function Called" <<std::endl;
}

MateriaSource::~MateriaSource(){
    std::cout << "MateriaSource: use function Called" <<std::endl;
}

void MateriaSource::learnMateria(AMateria* p){
    AMateria *p = new Ice();
    std::cout << "MateriaSource: use function Called" <<std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type){
    std::cout << "MateriaSource: use function Called" <<std::endl;
}
