#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{

    Zombie *zombie = NULL;
    zombie = new Zombie(name);
    zombie->SetName(name);
    return zombie;

    return NULL;
}
