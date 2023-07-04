#include "HumanA.hpp"
HumanA::HumanA(std::string str, Weapon &weapont)
{
    name = str;
    weapon = &weapont;
}

HumanA::~HumanA(void)
{
}
HumanA::HumanA(void)
{
}
void HumanA::setName(std::string str)
{
    name = str;
}

std::string HumanA::getName(void)
{
    return name;
}

void HumanA::attack(void)
{
    std::cout << getName() << " attacks with their " << HumanA::weapon->getType() << std::endl;
}