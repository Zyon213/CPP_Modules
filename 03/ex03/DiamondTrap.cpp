#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "default constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string Name)
{
    name = Name;
    className = "DiamondTrap";
    ClapTrap::name = Name + "_clap_name";
    hitPoints = FHP;
    energyPoints = SEP;
    attackDamage = FAP;
    std::cout << "parameter constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &diamond)
{
    name = diamond.name;
    className = diamond.className;
    ClapTrap::name = diamond.name + "_clap_name";
    hitPoints = diamond.hitPoints;
    energyPoints = diamond.hitPoints;
    attackDamage = diamond.attackDamage;
    std::cout << "copy constructor called" << std::endl;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamond)
{
    name = diamond.name;
    className = diamond.className;
    ClapTrap::name = diamond.name + "_clap_name";
    hitPoints = diamond.hitPoints;
    energyPoints = diamond.hitPoints;
    attackDamage = diamond.attackDamage;
    std::cout << "assignment operator called" << std::endl;
    return (*this);
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "How are you ClapTrap " << ClapTrap::name << " and "
              << "DiamondTrap " << DiamondTrap::name << std::endl;
}