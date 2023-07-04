#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &frag);
    FragTrap &operator=(const FragTrap &frag);
    virtual ~FragTrap();
    void highFivesGuys(void);
};

#endif