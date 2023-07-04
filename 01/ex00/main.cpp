#include "Zombie.hpp"

int main(void)
{
    Zombie zombie("Foo");
    Zombie *zombie1;

    zombie.announce();

    zombie1 = newZombie("thompson");
    zombie1->announce();

    randomChumb("gomez");

    delete zombie1;
    return (0);
}