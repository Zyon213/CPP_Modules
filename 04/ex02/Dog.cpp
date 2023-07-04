#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    brain = new Brain;
    std::cout << "Dog defualt constructor called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
    type = dog.type;
    brain = new Brain;
    *brain = *(dog.brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
    type = dog.type;
    brain = new Brain;
    *brain = *(dog.brain);
    std::cout << "Dog assignment operator called" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}
void Dog::makeSound() const
{
    std::cout << "Woow Woow Woow!" << std::endl;
}