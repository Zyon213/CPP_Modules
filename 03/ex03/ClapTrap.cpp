#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
    std::cout << "Default constructor called" << std::endl;
    name = Name;
    className = "ClapTrap";
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}
ClapTrap::ClapTrap(ClapTrap &clap)
{
    std::cout << "copy constructor called" << std::endl;
    name = clap.name;
    className = clap.className;
    hitPoints = clap.hitPoints;
    energyPoints = clap.energyPoints;
    attackDamage = clap.attackDamage;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &clap)
{
    std::cout << "assignment operator called" << std::endl;
    name = clap.name;
    className = clap.className;
    hitPoints = clap.hitPoints;
    energyPoints = clap.energyPoints;
    attackDamage = clap.attackDamage;
    return (*this);
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if ((this->energyPoints == 0) || (this->hitPoints == 0))
    {
        std::cout << className << " " << name << " can't attack. It has no hit or energy points!!" << std::endl;
    }
    else
    {
        this->energyPoints -= 1;
        std::cout << this->className << " " << this->name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if ((this->energyPoints == 0) || (this->hitPoints == 0))
    {
        std::cout << className << " " << name << " can't take damage. It has no hit or energy points!" << std::endl;
    }
    else
    {
        this->hitPoints -= amount;
        this->energyPoints -= 1;
        std::cout << className << " " << name << " takes " << hitPoints << " points damage" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if ((this->energyPoints == 0) || (this->hitPoints == 0))
    {
        std::cout << className << " " << name << " can't be repaired. It has no hit or energy points!!" << std::endl;
    }
    else
    {
        this->hitPoints += amount;
        this->energyPoints -= 1;
        std::cout << className << " " << name << " gets " << amount << " hit points!" << std::endl;
    }
}