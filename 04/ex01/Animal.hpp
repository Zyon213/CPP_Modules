#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
protected:
    std::string type;

public:
    Animal();
    Animal(Animal &animal);
    Animal &operator=(const Animal &animal);
    virtual ~Animal();
    bool &operator==(const Animal &animal);
    std::string getType(void) const;
    void setType(std::string Type);
    virtual void makeSound() const = 0;
};

#endif