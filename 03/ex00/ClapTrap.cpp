#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Default constructor called" << std::endl;
    Name = name;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}
ClapTrap::ClapTrap(const ClapTrap &clap)
{
    std::cout << "copy constructor called" << std::endl;
    Name = clap.Name;
    hitPoints = clap.hitPoints;
    energyPoints = clap.energyPoints;
    attackDamage = clap.attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap)
{
    std::cout << "assignment operator called" << std::endl;
    Name = clap.Name;
    hitPoints = clap.hitPoints;
    energyPoints = clap.energyPoints;
    attackDamage = clap.attackDamage;
    return (*this);
}
ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

std::string ClapTrap::getName(void)
{
    return (Name);
}

void ClapTrap::setHitPoints(unsigned int hit)
{
    hitPoints = hit;
}

unsigned int ClapTrap::getHitPoints(void)
{
    return (hitPoints);
}

void ClapTrap::setEnergyPoints(unsigned int energy)
{
    energyPoints = energy;
}

unsigned int ClapTrap::getEnergyPoints(void)
{
    return (energyPoints);
}

void ClapTrap::setAttackDamage(unsigned int damage)
{
    attackDamage = damage;
}

unsigned int ClapTrap::getAttackDamage(void)
{
    return (attackDamage);
}

void ClapTrap::attack(const std::string &target)
{
    if ((this->energyPoints == 0) || (this->hitPoints == 0))
    {
        std::cout << "ClapTrap " << Name << " can't attack. It has no hit or energy points!!" << std::endl;
    }
    else
    {
        this->energyPoints -= 1;
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if ((this->energyPoints == 0) || (this->hitPoints == 0))
    {
        std::cout << "ClapTrap " << Name << " can't take damage. It has no hit or energy points!" << std::endl;
    }
    else
    {
        this->hitPoints -= amount;
        this->energyPoints -= 1;
        std::cout << "ClapTrap " << Name << " takes " << amount << " points damage!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if ((this->energyPoints == 0) || (this->hitPoints == 0))
    {
        std::cout << "ClapTrap " << Name << " can't be repaired. It has no hit or energy points!!" << std::endl;
    }
    else
    {
        this->hitPoints += amount;
        this->energyPoints -= 1;
        std::cout << "ClapTrap " << Name << " gets " << amount << " hit points!" << std::endl;
    }
}