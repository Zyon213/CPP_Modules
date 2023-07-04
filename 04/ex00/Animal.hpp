#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
protected:
    std::string type;

public:
    Animal();
    Animal(const Animal &animal);
    Animal &operator=(const Animal &animal);
    virtual ~Animal();
    std::string getType(void) const;
    void setType(std::string Type);
    virtual void makeSound() const;
};

#endif