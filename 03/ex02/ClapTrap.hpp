#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
protected:
    std::string className;
    std::string Name;
    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap &clap);
    ClapTrap &operator=(const ClapTrap &clap);
    virtual ~ClapTrap();
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    /*     std::string getName(void);
        void setHitPoints(unsigned int hit);
        unsigned int getHitPoints(void);
        void setEnergyPoints(unsigned int hit);
        unsigned int getEnergyPoints(void);
        void setAttackDamage(unsigned int hit);
        unsigned int getAttackDamage(void);
   */
};

#endif