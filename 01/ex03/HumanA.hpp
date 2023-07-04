#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon *weapon;

public:
    HumanA(void);
    HumanA(std::string str, Weapon &weapont);
    ~HumanA(void);
    std::string getName(void);
    void setName(std::string str);
    void attack(void);
};

#endif