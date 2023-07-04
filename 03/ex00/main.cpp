#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Doger");
    ClapTrap b(a);
    ClapTrap c("don");

    a = c;
    //    ClapTrap mclap("Mustang");
    /*     dclap.setAttackDamage(3);
        std::cout << dclap.getEnergyPoints() << std::endl;
        std::cout << dclap.getHitPoints() << std::endl;
        dclap.attack(mclap.getName());
        dclap.takeDamage(5);
        dclap.beRepaired(15);
        dclap.takeDamage(5);
        dclap.takeDamage(5);
        dclap.takeDamage(5);
        dclap.takeDamage(5);
        dclap.beRepaired(15);
        dclap.attack(mclap.getName());

        dclap.takeDamage(5);
        dclap.takeDamage(5);
        dclap.takeDamage(5);
        dclap.takeDamage(5);

        std::cout << dclap.getEnergyPoints() << std::endl;
        std::cout << dclap.getHitPoints() << std::endl;
     */
    b.attack("gom");

    return (0);
}