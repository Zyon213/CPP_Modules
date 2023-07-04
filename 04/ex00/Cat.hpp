#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat &cat);
    Cat &operator=(const Cat &cat);
    virtual ~Cat();
    void makeSound() const;
};

#endif