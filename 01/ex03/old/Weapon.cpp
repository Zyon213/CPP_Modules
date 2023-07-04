#include "Weapon.hpp"
/*
Weapon::Weapon(std::string str)
{
    type = str;
}
*/
Weapon::Weapon(void)
{
}
Weapon::~Weapon(void)
{
}

void Weapon::setType(std::string str)
{
    type = str;
}

std::string Weapon::getType(void) const
{
    return type;
}