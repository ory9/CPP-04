#include "../include/Brain.hpp"

//============ Constructor Start ============
Brain::Brain(){
    std::cout << "Brain Default Constructor is called" <<std::endl;
}

Brain::Brain(Brain const & src){
    std::cout << "Brain Copy Constructor is called" <<std::endl;
    int i = -1;
    while (i++ < 100)
        this->_ideas[i] = src._ideas[i];
}
//============ Constructor End ============

//============ Destructor Start ============
Brain::~Brain(){
    std::cout << "Brain Deconstructor is called" <<std::endl;
}
//============ Destructor Start ============

//============ Copy Assigment Operator Start ============
Brain &Brain::operator = (const Brain &src){
    std::cout << "Brain Copy Assignment Operator is called" <<std::endl;
    if (this != &src)
    {
        int i = -1;
        while(i++ < 100)
            this->_ideas[i] = src._ideas[i];
    }
    return *this;
}
//============ Copy Assigment Operator End ============

//============ Member Functions Start ============
void Brain::setIdea(int index, string idea){
    if (index < 0 || index > 99)
    {
        std::cout << "Error Index is out of Range" << std::endl;
    }
    else
        this->_ideas[index] = idea;
}

string Brain::getIdea(int index) const{
    if (index < 0 || index > 99)
    {
        std::cout << "Error Index is out of Range" << std::endl;
        return NULL;
    }
    return this->_ideas[index];
}
//============ Member Functions End ============
