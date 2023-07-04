#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    brain = new Brain;
    std::cout << "Cat defualt constructor called" << std::endl;
}

Cat::Cat(const Cat &cat)
{
    type = cat.type;
    brain = new Brain;
    *brain = *(cat.brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
    type = cat.type;
    brain = new Brain;
    *brain = *(cat.brain);
    std::cout << "Cat assignment operator called" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow Meow!" << std::endl;
}