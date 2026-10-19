#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main( void ) 
{
    std::cout << "-----1.CONSTRUCTORS.-----" << std::endl;
    std::cout << "Animal  A:" << std::endl;
    const Animal* a = new Animal();
    std::cout << "Animal Dog B:" << std::endl;
    const Animal* b = new Dog();
    std::cout << "Animal Cat C:" << std::endl;
    const Animal* c = new  Cat();
    std::cout << "Wrong Animal  D:" << std::endl;
    const WrongAnimal* d = new WrongAnimal();
    std::cout << "WrongAnimal  WrongCat E:" << std::endl;
    const WrongAnimal* e = new WrongCat();
    std::cout << "Cat F:" << std::endl;
    const Cat* f = new Cat();
    std::cout << "Dog G:" << std::endl;
    const Dog* g = new Dog();
    std::cout << std::endl;

    std::cout << "-----2.GET_TYPE.-----" << std::endl;

    std::cout << "Animal  A:" << std::endl;
    std::cout << a->getType() <<  " " << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "Animal Dog B:" << std::endl;
    std::cout << b->getType() <<  " " << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "Animal Cat C:" << std::endl;
    std::cout << c->getType() << " " << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "WrongAnimal  D:" << std::endl;
    std::cout << d->getType() << " " << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "WrongAnimal  WrongCat E:" << std::endl;
    std::cout << e->getType() << " " << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "Cat F:" << std::endl;
    std::cout << f->getType() << " " << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "Dog G:" << std::endl;
    std::cout << g->getType() << " " << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << std::endl;

    std::cout << "-----3.MAKE__SOUND.-----" << std::endl;
    std::cout << "Animal  A:" << std::endl;
    a->makeSound();
    std::cout << "-----------------------------" << std::endl;
    std::cout << "Animal Dog B:" << std::endl;
    b->makeSound();
    std::cout << "-----------------------------" << std::endl;
    std::cout << "Animal Cat C:" << std::endl;
    c->makeSound();
    std::cout << "-----------------------------" << std::endl;
    std::cout << "WrongAnimal  D:" << std::endl;
    d->makeSound();
    std::cout << "-----------------------------" << std::endl;
    std::cout << "WrongAnimal  WrongCat E:" << std::endl;
    e->makeSound();
    std::cout << "-----------------------------" << std::endl;
    std::cout << "Cat F:" << std::endl;
    f->makeSound();
    std::cout << "-----------------------------" << std::endl;
    std::cout << "Dog G:" << std::endl;
    g->makeSound();
    std::cout << "-----------------------------" << std::endl;
    std::cout << std::endl;


    std::cout << "-----4.DESTRUCTORS.-----" << std::endl;
    std::cout << "Animal  A:" << std::endl;
    delete a;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "Animal Dog B:" << std::endl;
    delete b;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "Animal Cat C:" << std::endl;
    delete c;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "WrongAnimal  D:" << std::endl;
    delete d;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "WrongAnimal  WrongCat E:" << std::endl;
    delete e;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "Cat F:" << std::endl;
    delete f;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "Dog G:" << std::endl;
    delete g;
    std::cout << std::endl;
    return (0);
}