#include "Dog.hpp"

Dog::Dog(void) : Animal(), _brain (new Brain())
{
	type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& other): Animal(other), _brain(new Brain(*other._brain))
{
    std::cout << "Dog copy constructor called" << std::endl;
}
Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        *_brain = *other._brain;
    }
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Woof!" <<  std::endl;
}

Brain* Dog::getBrain() const
{
    return (_brain);
}

Dog::~Dog(void)
{
    delete _brain;
    std::cout << "Dog Destructor called" << std::endl;
}