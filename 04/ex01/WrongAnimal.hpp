#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &wronganimal);
    WrongAnimal &operator=(const WrongAnimal &wronganimal);
    virtual ~WrongAnimal();
    std::string getType(void) const;
    void setType(std::string Type);
    virtual void makeSound() const = 0;
};

#endif