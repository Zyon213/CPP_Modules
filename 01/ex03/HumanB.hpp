#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon *weapon;

public:
    HumanB(void);
    HumanB(std::string str);
    ~HumanB(void);
    std::string getName(void);
    void setName(std::string str);
    void setWeapon(Weapon &tweapon);
    void attack(void);
};

#endif