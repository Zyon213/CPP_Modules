#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA : public Weapon
{
private:
    std::string name;

public:
    //    HumanA(std::string str, Weapon weapon);
    HumanA(Weapon weapon);
    HumanA(HumanA &humana);

    ~HumanA(void);
    std::string getName(void);
    void setName(std::string str);
    void attack(void);
};

#endif