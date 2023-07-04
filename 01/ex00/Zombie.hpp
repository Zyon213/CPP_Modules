#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
private:
    std::string name;

public:
    Zombie(std::string str);
    ~Zombie(void);
    void SetName(std::string str);
    std::string GetName(void);
    void announce(void);
};

Zombie *newZombie(std::string name);
void randomChumb(std::string name);

#endif