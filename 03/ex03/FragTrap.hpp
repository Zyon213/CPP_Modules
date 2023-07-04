#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#define FHP 100
#define FEP 100
#define FAP 30

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string Name);
    FragTrap(const FragTrap &frag);
    FragTrap &operator=(const FragTrap &frag);
    virtual ~FragTrap();
    void highFivesGuys(void);
};

#endif