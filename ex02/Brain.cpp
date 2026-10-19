#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = other;
}
Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &other)
    {
        for(int i = 0; i < 100; i++)
            _ideas[i] = other._ideas[i];
    }
    return (*this);
}
void    Brain::setIdea(int index, const std::string& idea)
{
    if (index < 100 && index >= 0)
    {
        _ideas[index] = idea;
    }
}
std::string Brain::getIdea(int index) const
{
    if (index < 100 && index >= 0)
    {
        return(_ideas[index]);
    }
    return("");
}
Brain::~Brain(void)
{
    std::cout << "Brain Destructor called" << std::endl;
}