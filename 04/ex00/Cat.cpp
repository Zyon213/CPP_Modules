#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat defualt constructor called" << std::endl;
}

Cat::Cat(const Cat &cat)
{
    type = cat.type;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
    type = cat.type;
    std::cout << "Cat assignment operator called" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow Meow!" << std::endl;
}