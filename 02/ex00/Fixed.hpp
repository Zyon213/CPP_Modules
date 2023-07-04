#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
private:
    int raw;
    static const int fractBit = 8;

public:
    Fixed(void);
    Fixed(const Fixed &fixed);
    Fixed &operator=(const Fixed &fixed);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    ~Fixed(void);
};

#endif
