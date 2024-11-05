#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource(): _size(0){
    for (int i = 0; i < 4; i++)
        _arr[i] = NULL;
    std::cout << "MateriaSource: Constructor is Called" <<std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &src){
    *this = src;
    std::cout << "MateriaSource: Copy Constructor Called" <<std::endl;   
}

MateriaSource &MateriaSource::operator = (const MateriaSource & src){
    
    this->_size = src._size;
    if (this != &src)
    {
        if (this->_arr)
        {
            for (int i = 0; i < 4; i++)
                delete this->_arr[i];
        }
        for (int i = 0; i < 4; i++)
        {
            this->_arr[i] = src._arr[i];
        }
    }
    return *this;
}

MateriaSource::~MateriaSource(){
    std::cout << "MateriaSource: use function Called" <<std::endl;
    for (int i = 0; i < _size; i++)
        delete this->_arr[i];
}

void MateriaSource::learnMateria(AMateria* p){
    if (this->_size >= 4)
        std::cout << "LearnMateria cannot learn out of space" <<std::endl;
    else
    {
        this->_arr[_size] = p;
        _size++;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type){
    for (int i = 0; i < 4 && this->_arr[i]; i++)
    {
        if (type == this->_arr[i]->getType())
            return this->_arr[i]->clone();
    }
    return NULL;
}

void MateriaSource::printMateria() const{
    for (int i = 0; i < 4; i++)
    {
        if (this->_arr[i])
            std::cout << this->_arr[i]->getType() << std::endl;
        else
            std::cout << "Materia not Found" << std::endl;
    }
}