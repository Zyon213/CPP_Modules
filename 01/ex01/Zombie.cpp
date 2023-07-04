#include "Zombie.hpp"

Zombie::Zombie(void)
{
    //    std::cout << "constructor called." << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << GetName() << ": destructor called." << std::endl;
}

std::string Zombie::GetName(void)
{
    return name;
}

void Zombie::SetName(std::string str)
{
    name = str;
}

void Zombie::announce(void)
{
    std::cout << GetName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}