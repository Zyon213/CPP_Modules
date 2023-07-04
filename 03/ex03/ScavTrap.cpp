#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    name = name;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScapTrap dafault constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav)
{
    std::cout << "copy constructor called" << std::endl;
    name = scav.name;
    hitPoints = scav.hitPoints;
    energyPoints = scav.energyPoints;
    attackDamage = scav.attackDamage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav)
{
    std::cout << "assignment operator called" << std::endl;
    name = scav.name;
    hitPoints = scav.hitPoints;
    energyPoints = scav.energyPoints;
    attackDamage = scav.attackDamage;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScapTrap is now in gate keeper mode" << std::endl;
}
