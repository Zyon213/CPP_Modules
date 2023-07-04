#include "Fixed.hpp"

Fixed::Fixed(void)
{
    raw = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    raw = fixed.raw;
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return raw;
}

void Fixed::setRawBits(int const r)
{
    std::cout << "setRawBits member function called" << std::endl;
    raw = r;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}