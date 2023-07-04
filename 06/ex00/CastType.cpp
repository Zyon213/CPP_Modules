#include "CastType.hpp"

CastType::CastType()
{
}

CastType::~CastType()
{
}

void CastType::stringToChar(std::string str)
{
    int len = str.length();
    if (len == 1)
    {
        int let = std::isalpha(str[0]);
        if (let != 0)
        {
            std::cout << "char: " << str[0] << std::endl;
        }
        else if (let == 0)
            std::cout << "char: Non displayable" << std::endl;
    }
    else
        std::cout << "char: impossible" << std::endl;
}

void CastType::stringToInteger(std::string str)
{
    int num1, num2;

    try
    {
        if (isDigit(str))
        {
            num1 = std::stoi(str);
            std::cout << "int: " << num1 << std::endl;
        }
        else if (isDouble(str))
        {
            num1 = std::stoi(str);
            std::cout << "int: " << num1 << std::endl;
        }
        else if (isFloat(str))
        {
            int len = str.length();
            std::string str1 = str.substr(0, (len - 1));
            num1 = std::stoi(str1);
            std::cout << "int: " << num1 << std::endl;
        }
        else
            std::cout << "int: impossible" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "int: impossible" << std::endl;
    }
}

void CastType::stringToDouble(std::string str)
{
    double num1, num2;
    try
    {
        if (isDouble(str))
        {
            num1 = std::stod(str);
            std::cout << "double: " << num1 << std::endl;
        }
        else if (isDigit(str))
        {
            double inum1 = std::stod(str);
            if (str.length() < 7)
                std::cout << "double: " << inum1 << ".0" << std::endl;
            else
                std::cout << "double: " << inum1 << std::endl;
        }
        else if (isFloat(str))
        {
            int len = str.length();
            std::string str1 = str.substr(0, (len - 1));
            double dnum1 = std::stod(str1);
            std::cout << "double: " << dnum1 << std::endl;
        }
        else if (std::isinf(std::stod(str)))
            std::cout << "double: " << std::stod(str) << std::endl;
        else
            std::cout << "double: nan" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "double: nan" << std::endl;
    }
}

void CastType::stringToFloat(std::string str)
{
    try
    {
        if (isFloat(str))
        {
            float fnum1 = std::stof(str);
            std::cout << "float: " << fnum1 << "f" << std::endl;
        }
        else if (isDigit(str))
        {
            float num1 = std::stof(str);
            if (str.length() < 7)

                std::cout << "float: " << num1 << ".0f" << std::endl;
            else
                std::cout << "float: " << num1 << "f" << std::endl;
        }
        else if (isDouble(str))
        {
            double dnum = std::stod(str);
            std::cout << "float: " << dnum << "f" << std::endl;
        }
        else if (std::isinf(std::stod(str)))
        {
            if (str[0] == '-')
                std::cout << "float: -inff" << std::endl;
            else
                std::cout << "float: inff" << std::endl;
        }
        else
            std::cout << "float: nanf" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "float: nanf" << std::endl;
    }
}
