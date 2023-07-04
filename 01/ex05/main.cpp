#include "Harl.hpp"

int main()
{
    Harl harl;
    std::string myComplain;
    std::cout << "Complain [DEBUG] [INFO] [WARING] [ERROR]: ";
    std::cin >> myComplain;
    harl.complain(myComplain);

    return (0);
}