#include "harl.hpp"

Harl::Harl(void)
{
}
Harl::~Harl(void)
{
}

void Harl::debug(void)
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra becom for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do !" << std::endl;
}
void Harl::info(void)
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I can't believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger!\nIf you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[WARNING]]" << std::endl;
    std::cout << "I think I deserveto have some extra bacon for free.\nI've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is uacceptable! I want to speak tothe manager now." << std::endl;
}

int getChoice(std::string choice)
{
    std::string msg[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int size = sizeof(msg) / sizeof(msg[0]);
    int index = 10;
    for (int i = 0; i < size; i++)
    {
        if (choice.compare(msg[i]) == 0)
        {
            index = i;
        }
    }
    return index;
}

void Harl::complain(std::string level)
{
    switch (getChoice(level))
    {
    default:
        std::cout << "Invalid choice.\n";
        break;
    case (0):
        debug();
    case (1):
        info();
    case (2):
        warning();
    case (3):
        error();
    }
}
