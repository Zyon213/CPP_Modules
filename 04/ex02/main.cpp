#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include "Animal.hpp"

int main()
{
    /*  //   If the class is not abstract you can instatiate
     //   Animal class like this.

        Animal *a = new Animal;
        Cat c;
        a = &c;
        a->makeSound();
     */
    Animal *a;
    Cat c;
    a = &c;
    a->makeSound();

    Animal *aa;
    Dog *d = new Dog;
    aa = d;
    aa->makeSound();

    std::cout << sizeof(d) << std::endl;
    delete d;
    return (0);
}