#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
private:
    std::string Name;
    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &clap);
    ClapTrap &operator=(const ClapTrap &clap);
    ~ClapTrap();
    void attack(const std::string &target);
    std::string getName(void);
    void setHitPoints(unsigned int hit);
    unsigned int getHitPoints(void);
    void setEnergyPoints(unsigned int hit);
    unsigned int getEnergyPoints(void);
    void setAttackDamage(unsigned int hit);
    unsigned int getAttackDamage(void);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif