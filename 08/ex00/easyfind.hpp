#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <vector>
#include <algorithm>

class ElementNotFound : public std::exception
{
public:
    const char *what() const throw();
};

const char *ElementNotFound::what() const throw()
{
    return ("Element not found");
}

template <typename T>
void easyFind(T t, int n)
{
    std::vector<int>::iterator i;

    i = std::find(t.begin(), t.end(), n);
    if (i == t.end())
        throw ElementNotFound();
    else
        std::cout << "Found element: " << n << std::endl;
}

#endif