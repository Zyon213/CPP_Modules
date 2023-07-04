#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#define SHP 100
#define SEP 50
#define SAP 20

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap();
    explicit ScavTrap(std::string Name);
    ScavTrap(const ScavTrap &scav);
    ScavTrap &operator=(const ScavTrap &scav);
    virtual ~ScavTrap();
    void guardGate();
};

#endif