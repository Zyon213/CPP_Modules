#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("Doger");
    ClapTrap c(a);
    ClapTrap b;
    ClapTrap d;

    b = a;
    b.attack("thomas");
    c.attack("thomas");

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

    return (0);
}