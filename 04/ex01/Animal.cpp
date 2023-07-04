#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal &animal)
{
    type = animal.type;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &animal)
{
    type = animal.type;
    std::cout << "Animal assignment operator called" << std::endl;
    return (*this);
}

/* bool &Animal::operator==(const Animal &animal)
{
    return (type == animal.type);
} */
Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal make sound" << std::endl;
}

std::string Animal::getType(void) const
{
    return (type);
}

void Animal::setType(std::string Type)
{
    type = Type;
}
