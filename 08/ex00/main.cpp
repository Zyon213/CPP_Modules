#include "easyfind.hpp"

int main()
{
    std::cout << "**********************************" << std::endl;

    std::vector<int> v = {1, 2, 3, 4, 5};
    std::vector<int>::iterator i;
    try
    {
        ::easyFind(v, 14);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    v.insert(v.begin(), 45);
    v.insert(v.begin() + 3, 77);
    v.push_back(12);
    v.erase(v.begin() + 2);

    std::cout << "**********************************" << std::endl;

    for (i = v.begin(); i != v.end(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;

    std::cout << "**********************************" << std::endl;

    try
    {
        ::easyFind(v, 1);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
