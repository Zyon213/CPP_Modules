#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    explicit ScavTrap(std::string name);
    ScavTrap(const ScavTrap &scav);
    ScavTrap &operator=(const ScavTrap &scav);
    virtual ~ScavTrap();
    void guardGate();
};

#endif