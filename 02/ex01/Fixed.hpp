#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int raw;
    static const int fractBit = 8;

public:
    Fixed(void);
    Fixed(int const iraw);
    Fixed(float const fraw);
    Fixed(const Fixed &fixed);
    Fixed &operator=(const Fixed &fixed);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    ~Fixed(void);
};

std::ostream &operator<<(std::ostream &output, const Fixed &fixed);
#endif
