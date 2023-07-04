#include "iter.hpp"

int main()
{
    int a[] = {3, 4, 5, 6, 7, 8};
    ::iter(a, 6, &::display);
    ::iter(a, 6, &::doubleNum);

    std::string str[] = {"one", "two", "three", "four"};
    ::iter(str, 4, &::display);
    ::iter(str, 4, &::toUpper);

    char c[] = {'x', 'm', 'r', 'u', 'z'};
    ::iter(c, 5, &::toUpperC);

    char strc[] = "YONASYOHANNES";
    ::iter(strc, 13, &::toLower);

    float fa[] = {424783.542544, 54244.564645642, 55.145454544, 0.06565412, 782.0656145};
    ::iter(fa, 5, &::science);
    ::iter(fa, 5, &::precise);

    return (0);
}