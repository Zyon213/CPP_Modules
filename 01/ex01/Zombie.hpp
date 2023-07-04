#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
private:
    std::string name;

public:
    //    Zombie(std::string str);
    Zombie(void);
    ~Zombie(void);
    void SetName(std::string str);
    std::string GetName(void);
    void announce(void);
};

Zombie *zombieHorde(int N, std::string name);

#endif