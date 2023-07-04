#include "HumanA.hpp"
// HumanA::HumanA(std::string str, Weapon weapon) : Weapon(str)
HumanA::HumanA(Weapon weapon)
{
}

HumanA::HumanA(HumanA &humana)
{
}

HumanA::~HumanA(void)
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
    std::cout << getName() << " attacks with their " << Weapon::getType() << std::endl;
}