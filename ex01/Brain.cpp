#include "Brain.hpp"

Brain::Brain(void) : _ideas()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& other):type(other.type)
{
    std::cout << "Brain copy constructor called" << std::endl;
}
Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "Brain Destructor called" << std::endl;
}