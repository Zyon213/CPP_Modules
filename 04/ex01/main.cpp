#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include "Animal.hpp"

int main()
{
    Animal *animal[10];

    for (int i = 0; i < 10; i++)
    {
        if ((i % 2) == 0)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
    }

    for (int x = 0; x < 10; x++)
        delete animal[x];

    //*****************************************************
    // since it is a deep copy both will have diffenet name
    // it will have a distinct name after setting its the value

    /*     std::cout << "checking deep copy" << std::endl;

        Animal *a = new Dog();
        Animal *b = new Dog();

        *a = *b;
        std::cout << a->getType() << std::endl;
        std::cout << b->getType() << std::endl;
        a->setType("Elephant");
        std::cout << a->getType() << std::endl;
        std::cout << b->getType() << std::endl;

        delete a;
        delete b;

        std::cout << "deep copy check for cat" << std::endl;

        Cat *c = new Cat();
        Cat *d = new Cat(*c);

        std::cout << c->getType() << std::endl;
        std::cout << d->getType() << std::endl;
        a->setType("Monkey");
        std::cout << c->getType() << std::endl;
        std::cout << d->getType() << std::endl;

        delete c;
        delete d; */
    //**************************************************
    return (0);
}