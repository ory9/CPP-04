#include "../include/Animal.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
return 0;
}

// int main()
// {
// 	int n = 4;
// 	Animal	*animals[n];
// 	for (int i = 0; i < n / 2; i++)
// 		animals[i] = new Dog();
// 	for (int i = n /2 ; i < n; i++)
// 		animals[i] = new Cat();
// 	for (int i = 0; i < n; i++)
// 		animals[i]->makeSound();
// 	for (int i = 0; i < n; i++)
// 		delete animals[i];
// 	std::cout<<"######################################################################\n";
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	delete j;//should not create a leak
// 	delete i;
// 	std::cout<<"######################################################################\n";
// 	WrongAnimal *wa = new WrongCat();
// 	wa->makeSound();
// 	delete wa;
// 	std::cout<<"######################################################################\n";
// 	Animal *k;
// 	Cat	m;
// 	m.setIdea(7, "I have fun\n");
// 	k = &m;
// 	k->makeSound();
// 	Cat	s;
// 	s = m;
// 	std::cout<<m.getIdea(7);
// 	std::cout<<s.getIdea(7);
// 	m.setIdea(7, "now coool\n");
// 	std::cout<<m.getIdea(7);
// 	std::cout<<s.getIdea(7);
// 	return 0;
// }

// int main()
// {
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// meta->makeSound();
// delete i;
// delete j;
// delete meta;
// return 0;
// }

// int main()
// {
// const WrongAnimal* p = new WrongCat();
// std::cout << p->getType() << " " << std::endl;
// delete p;
// return 0;
// }
