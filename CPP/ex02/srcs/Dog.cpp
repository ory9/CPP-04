#include "../include/Animal.hpp"
#include "../include/Dog.hpp"

//============ Constructor Start ============
Dog::Dog()
{
    setType("Dog");
    DogBrain = new Brain();
    std::cout <<"Dog Default Constructor called" <<std::endl;
}

Dog::Dog(Dog const & Dog): Animal()
{
    std::cout<<"Dog Copy Constructor called" <<std::endl;
    *this = Dog;
}
//============ Constructor End ============

//============ Destructor Start ============
Dog::~Dog(){
    delete DogBrain;
    std::cout << "Dog Destructor Called" << std::endl;
}
//============ Destructor Start ============

//============ Copy Assigment Operator Start ============
Dog & Dog::operator = (Dog const & src)
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
void Dog::makeSound() const{
    std::cout << "*** Dogs make deep, rumbling barking Sound ***" << std::endl;
}

string Dog::getIdea(int index) const{
    return this->DogBrain->getIdea(index);
}
void Dog::setIdea(int index, string idea){
    this->DogBrain->setIdea(index, idea);
}
//============ Member Functions End ============
