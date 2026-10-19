#include "Cat.hpp"

Cat::Cat(void) : Animal(), _brain(new Brain())
{
	type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& other): Animal(other), _brain(new Brain(*other._brain))
{
    std::cout << "Cat copy constructor called" << std::endl;
}
Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        *_brain = *other._brain;
    }
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Miau!" <<  std::endl;
}

Brain* Cat::getBrain() const
{
    return (_brain);
}

Cat::~Cat(void)
{
    delete _brain;
    std::cout << "Cat Destructor called" << std::endl;
}