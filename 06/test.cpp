#include <iostream>
#include <typeinfo>
#include <string>
#include <cctype>
#include <iomanip>

void stringToChar(std::string str)
{
    int len = str.length();
    int let = std::isalpha(str[0]);
    if (len != 1)
        std::cout << "char: impossible" << std::endl;
    else if (let == 0)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << str[0] << std::endl;
}

void stringToInt(std::string str)
{
    try
    {
        int num = std::stoi(str);
        if (num)
            std::cout << "int: " << num << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "int: impossible" << std::endl;
    }
}

void stringToDouble(std::string str)
{
    try
    {
        double num = std::stod(str);
        if (num)
            std::cout << "double: " << num << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "double: nan" << std::endl;
    }
}

void stringToFloat(std::string str)
{
    try
    {
        float num = std::stof(str);
        if (num)
            std::cout << "float: " << std::setprecision(5) << num << "f" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "float: nanf" << std::endl;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        stringToChar(argv[1]);
        stringToInt(argv[1]);
        stringToDouble(argv[1]);
        stringToFloat(argv[1]);
    }
    else
        std::cout << "Invalid Input" << std::endl;

    return (0);
}
