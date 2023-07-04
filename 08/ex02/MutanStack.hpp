#ifndef MUTANSTACK_H
#define MUTANSTACK_H

#include <iostream>
#include <stack>
#include <vector>

template <class T>
class MutanStack : public std::stack<T>
{

public:
    typedef typename std::deque<T>::iterator iterator;

    MutanStack() : std::stack<T>(){};

    MutanStack(MutanStack &mutan) : std::stack<T>()
    {
        *this = mutan;
    };

    MutanStack &operator=(MutanStack &mutan)
    {
        std::stack<T>::operator=(mutan);
        return (*this);
    };

    virtual ~MutanStack(){};
    iterator end()
    {
        return (this->c.end());
    };

    iterator begin()
    {
        return (this->c.begin());
    };
};

#endif