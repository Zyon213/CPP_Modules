#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap a("Doger");
    ScavTrap b("Memphes");
    FragTrap c("Treves");

    a.attack("five");
    b.attack("ten");
    c.attack("oen");

    c.highFivesGuys();
    c.beRepaired(5);
    return (0);
}