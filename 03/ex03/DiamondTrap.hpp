#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string name;

public:
    DiamondTrap();
    DiamondTrap(std::string Name);
    DiamondTrap(const DiamondTrap &diamond);
    DiamondTrap &operator=(const DiamondTrap &diamond);
    virtual ~DiamondTrap();
    void attack(const std::string &target);
    void whoAmI();
};
#endif