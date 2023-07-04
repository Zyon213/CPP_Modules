#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
{
    type = wronganimal.type;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wronganimal)
{
    type = wronganimal.type;
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal make sound" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (type);
}

void WrongAnimal::setType(std::string Type)
{
    type = Type;
}
