#include "HumanA.hpp"

int main(void)
{
    Weapon weapon;
    weapon.setType("bazuka");

    std::cout << weapon.getType() << std::endl;
    //    HumanA humana("automatic", weapon);
    HumanA humana(weapon);
    humana.setName("bonaza");
    humana.attack();

    return (0);
}