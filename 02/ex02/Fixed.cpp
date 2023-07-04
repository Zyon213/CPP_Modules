#include "Fixed.hpp"

Fixed::Fixed(void)
{
    raw = 0;
    //    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &fixed)
{
    //    std::cout << "Copy constructor called" << std::endl;
    raw = fixed.getRawBits();
}

Fixed &Fixed::Fixed::operator=(const Fixed &fixed)
{
    //    std::cout << "Copy assignment Fixed::operator called" << std::endl;
    raw = fixed.raw;
    return *this;
}

Fixed::Fixed(int const iraw)
{
    //    std::cout << "Int constructor called" << std::endl;
    raw = iraw << fractBit;
}

Fixed::Fixed(float const fraw)
{
    //   std::cout << "Float constructor called" << std::endl;
    raw = (int)(roundf(fraw * (1 << fractBit)));
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return raw;
}

void Fixed::setRawBits(int const r)
{
    //   std::cout << "setRawBits member function called" << std::endl;
    raw = r;
}
float Fixed::toFloat(void) const
{
    return ((float)raw / (float(1 << fractBit)));
}
int Fixed::toInt(void) const
{
    return (raw >> fractBit);
}
Fixed::~Fixed(void)
{
    //   std::cout << "Destructor called" << std::endl;
}

bool Fixed::operator==(const Fixed &t) const
{
    return (raw == t.raw);
}

bool Fixed::operator>(const Fixed &t) const
{
    return (raw > t.raw);
}

bool Fixed::operator<(const Fixed &t) const
{
    return (raw < t.raw);
}

bool Fixed::operator>=(const Fixed &t) const
{
    return (raw >= t.raw);
}

bool Fixed::operator<=(const Fixed &t) const
{
    return (raw <= t.raw);
}

bool Fixed::operator!=(const Fixed &t) const
{
    return (raw != t.raw);
}

Fixed Fixed::operator*(const Fixed &t) const
{
    Fixed fx;
    fx.setRawBits((raw * t.getRawBits()) >> fractBit);
    return (fx);
}
Fixed Fixed::operator/(const Fixed &t) const
{
    return (raw / t.raw);
}
Fixed Fixed::operator+(const Fixed &t) const
{
    return (raw + t.raw);
}
Fixed Fixed::operator-(const Fixed &t) const
{
    return (raw - t.raw);
}

Fixed &Fixed::operator++(void)
{
    ++raw;
    return *this;
}

Fixed &Fixed::operator--(void)
{
    --raw;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed fx(*this);
    operator++();
    return (fx);
}

Fixed Fixed::operator--(int)
{
    Fixed fx(*this);
    operator--();
    return (fx);
}

Fixed &Fixed::min(Fixed &n1, Fixed &n2)
{
    if (n1 < n2)
        return n1;
    else
        return n2;
}

const Fixed &Fixed::min(const Fixed &n1, const Fixed &n2)
{
    if (n1 < n2)
        return n1;
    else
        return n2;
}
Fixed &Fixed::max(Fixed &n1, Fixed &n2)
{
    if (n1 > n2)
        return n1;
    else
        return n2;
}

const Fixed &Fixed::max(const Fixed &n1, const Fixed &n2)
{
    if (n1 > n2)
        return n1;
    else
        return n2;
}

std::ostream &operator<<(std::ostream &output, const Fixed &fixed)
{
    output << fixed.toFloat();
    return (output);
}