#include "Weapon.hpp"

HumamB::HumanB(void)
{
}

HumanB::~HumanB(void)
{
}

void HumanB::setName(std::string str)
{
    name = str;
}

std::string HumanB::getName(void)
{
    return name;
}

void HumanB::attack(void)
{
    std::cout << getName() << " attacks with their " << Weapon::getType() << std::endl;
}