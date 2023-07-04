#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB : public Weapon
{
private:
    std::string name;

public:
    HumanB(void);
    ~HumanB(void);
    std::string getName(void);
    void setName(std::string str);
    void attack(void);
};

#endif