#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat defualt constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat)
{
    type = wrongcat.type;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongcat)
{
    type = wrongcat.type;
    std::cout << "WrongCat assignment operator called" << std::endl;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow Meow Meow!" << std::endl;
}