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

    bool operator==(const Fixed &t) const;
    bool operator>(const Fixed &t) const;
    bool operator<(const Fixed &t) const;
    bool operator>=(const Fixed &t) const;
    bool operator<=(const Fixed &t) const;
    bool operator!=(const Fixed &t) const;

    Fixed operator*(const Fixed &t) const;
    Fixed operator/(const Fixed &t) const;
    Fixed operator+(const Fixed &t) const;
    Fixed operator-(const Fixed &t) const;

    Fixed &operator++(void);
    Fixed &operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);

    static Fixed &min(Fixed &f1, Fixed &f2);
    const static Fixed &min(const Fixed &f1, const Fixed &f2);

    static Fixed &max(Fixed &f1, Fixed &f2);
    const static Fixed &max(const Fixed &f1, const Fixed &f2);

    ~Fixed(void);
};

std::ostream &operator<<(std::ostream &output, const Fixed &fixed);
#endif
