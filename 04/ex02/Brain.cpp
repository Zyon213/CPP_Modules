#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = brain.ideas[i];
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = brain.ideas[i];
    std::cout << "Brain assignment operator called" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}