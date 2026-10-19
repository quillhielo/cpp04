#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    std::cout << "----- ABSTRACT CLASS TEST -----" << std::endl;

    //Animal animal; // No debe compilar: Animal es abstracta.

    std::cout << "\n----- POLYMORPHISM TEST -----" << std::endl;

    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << ": ";
    dog->makeSound();

    std::cout << cat->getType() << ": ";
    cat->makeSound();

    std::cout << "\n----- DESTRUCTORS -----" << std::endl;

    delete dog;
    delete cat;

    return 0;
}