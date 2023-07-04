#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    ClapTrap a("Doger");
    ScavTrap b("Memphes");
    FragTrap c("Treves");
    DiamondTrap d("gomes");

    d.attack("tamy");
    d.whoAmI();
    d.takeDamage(4);

    //    std::cout << d.energyPoints << std::endl;
    return (0);
}