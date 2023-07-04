#include "Zombie.hpp"

void randomChumb(std::string name)
{
    Zombie *zombie = NULL;
    zombie = new Zombie(name);
    zombie->announce();
    delete zombie;
}
