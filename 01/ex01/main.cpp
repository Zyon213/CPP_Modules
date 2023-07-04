#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie = NULL;
    int N;
    std::cout << "Insert of number of zombies: ";
    std::cin >> N;
    zombie = zombieHorde(N, "zombie");

    for (int i = 0; i < N; i++)
        zombie->announce();

    delete[] zombie;
    return (0);
}