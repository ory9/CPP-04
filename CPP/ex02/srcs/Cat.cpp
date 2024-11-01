#include "../include/Animal.hpp"
#include "../include/Cat.hpp"

//============ Constructor Start ============
Cat::Cat()
{
    setType("Cat");
    CatBrain = new Brain();
    std::cout <<"Cat Default Constructor called" <<std::endl;
}

Cat::Cat(Cat const & cat): Animal()
{
    std::cout<<"Copy Constructor called" <<std::endl;
    *this = cat;
}
//============ Constructor End ============

//============ Destructor Start ============
Cat::~Cat(){
    delete CatBrain;
    std::cout << "Cat Destructor Called" << std::endl;
}
//============ Destructor Start ============

//============ Copy Assigment Operator Start ============
Cat & Cat::operator = (Cat const & src)
{
    std::cout << "Dog Copy Assigment Operator" << std::endl;
    if (this != &src)
    {
        int index = 0;
        this->type = src.getType();
        this->getIdea(index) = src.getIdea(index);
    }
    return *this;
}
//============ Copy Assigment Operator End ============

//============ Member Functions Start ============
void Cat::makeSound() const{
    std::cout << "*** Cats make meows  Sound ***" << std::endl;
}

string Cat::getIdea(int index) const{
    return this->CatBrain->getIdea(index);
}

void Cat::setIdea(int index, string idea){
    this->CatBrain->setIdea(index, idea);
}
//============ Member Functions End ============
