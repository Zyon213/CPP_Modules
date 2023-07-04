#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    name = Name;
    /*     hitPoints = 100;
        energyPoints = 100;
        attackDamage = 30; */
    hitPoints = FHP;
    energyPoints = FEP;
    attackDamage = FAP;
    std::cout << "FragTrap parameter constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &frag)
{
    name = frag.name;
    hitPoints = frag.hitPoints;
    energyPoints = frag.energyPoints;
    attackDamage = frag.attackDamage;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &frag)
{
    name = frag.name;
    hitPoints = frag.hitPoints;
    energyPoints = frag.energyPoints;
    attackDamage = frag.attackDamage;
    std::cout << "FragTrap assigment operator called" << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap can you give me a high five?" << std::endl;
}