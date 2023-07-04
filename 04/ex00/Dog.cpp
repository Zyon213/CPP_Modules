#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog defualt constructor called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
    type = dog.type;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
    type = dog.type;
    std::cout << "Dog assignment operator called" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woow Woow Woow!" << std::endl;
}