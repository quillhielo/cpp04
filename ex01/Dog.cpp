#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& other): Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
}
Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &other)
        Animal::operator=(other);
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Woof!" <<  std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog Destructor called" << std::endl;
}