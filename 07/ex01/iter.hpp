#ifndef ITER_H
#define ITER_H

#include <iostream>
//#include <string>
#include <iomanip>

template <typename T>
void display(T a)
{
    std::cout << a << " ";
}

template <typename T>
void doubleNum(T a)
{
    a *= 2;
    std::cout << a << " ";
}

template <typename T>
void toUpper(T a)
{
    for (int i = 0; i < a.length(); i++)
        std::cout << static_cast<char>(std::toupper(a[i]));
    std::cout << " ";
}

template <typename T>
void toLower(T a)
{
    std::cout << static_cast<char>(std::tolower(a)) << " ";
}

template <typename T>
void toUpperC(T a)
{
    std::cout << static_cast<char>(std::toupper(a)) << " ";
}

template <typename T>
void precise(T a)
{
    std::cout << std::setprecision(4) << a << " ";
}

template <typename T>
void science(T a)
{
    std::cout << static_cast<float>(a) << " ";
}

// calling function
template <typename T>
void iter(T a[], int n, void (*f)(T))
{
    for (int i = 0; i < n; i++)
        f(a[i]);
    std::cout << std::endl;
}

#endif