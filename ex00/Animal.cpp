#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& other):type(other.type)
{
    std::cout << "Animal copy constructor called" << std::endl;
}
Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

void    Animal::makeSound() const
{
    std::cout << "Make generic animal sound!" <<  std::endl;
}

std::string Animal::getType()const
{
    return(type);
}


Animal::~Animal(void)
{
    std::cout << "Animal Destructor called" << std::endl;
}