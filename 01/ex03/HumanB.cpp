#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
    name = str;
}

HumanB::~HumanB(void)
{
}
HumanB::HumanB(void)
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

void HumanB::setWeapon(Weapon &tweapon)
{
    weapon = &tweapon;
}

void HumanB::attack(void)
{
    std::cout << getName() << " attacks with their " << HumanB::weapon->getType() << std::endl;
}