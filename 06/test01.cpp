#include <iostream>
#include <typeinfo>
#include <string>
#include <cctype>
#include <iomanip>

void stringToChar(std::string str)
{
    int len = str.length();
    if (len == 1)
    {
        int let = std::isalpha(str[0]);
        if (let != 0)
        {
            char a = static_cast<unsigned char>(str[0]);
            std::cout << "char: " << a << std::endl;
            std::cout << typeid(a).name() << std::endl;
        }
        else if (let == 0)
            std::cout << "char: Non displayable" << std::endl;
    }
    else
        std::cout << "char: impossible" << std::endl;
}

int isDigit(std::string str)
{
    if (std::isalpha(str[0]) != 0)
        return (0);
    for (int i = 0; i < str.length(); i++)
    {
        if (std::isdigit(str[i]) == false)
            return (0);
    }
    return (1);
}

int isDouble(std::string str)
{
    int len = str.length();
    int i = 0;

    for (i; i < len; i++)
    {
        if (str[i] == '.')
            break;
        else if (std::isdigit(str[i] == false))
            return (0);
    }

    if ((str[i] == '.') && (i < len))
    {
        ++i;
        while (i < len)
        {
            if (std::isdigit(str[i]) == false)
                return (0);
            i++;
        }
    }
    return (1);
}

int isFloat(std::string str)
{
    int len = str.length();
    std::string str1 = str.substr(0, (len - 1));
    if (isDouble(str1) && str[len - 1] == 'f')
        return (1);
    else
        return (0);
}

void stringToInteger(std::string str)
{
    int num, num1, num2;
    if (isDigit(str) == false)
    {
        std::cout << "int: impossible" << std::endl;
    }
    else if (isDouble(str) || isFloat(str))
    {
        num1 = std::stoi(str);
        num2 = reinterpret_cast<int>(num1);
        std::cout << "int: " << num2 << std::endl;
    }
    else
    {
        num1 = std::stoi(str);
        num2 = reinterpret_cast<int>(num1);
        std::cout << typeid(num2).name() << std::endl;
    }
}

void stringToDouble(std::string str)
{
    double num1, num2;
    if (isDigit(str) == false)
        std::cout << "double: nan" << std::endl;
    else if (isDigit(str))
    {
        num1 = std::stod(str);
        num2 = static_cast<double>(num1);
        std::cout << "double: " << num2 << ".0" << std::endl;
    }
    else if (isDouble(str))
    {
        num1 = std::stod(str);
        num2 = static_cast<double>(num1);
        std::cout << "double: " << num2 << std::endl;
        std::cout << typeid(num2).name() << std::endl;
    }
}

void stringToFloat(std::string str)
{
    if (isDigit(str) == false)
        std::cout << "float: nanf" << std::endl;
    else if (isDigit(str))
    {
        int num1 = std::stoi(str);
        int num2 = static_cast<int>(num1);
        std::cout << "float: " << num2 << ".0f" << std::endl;
    }
    else if (isDouble(str))
    {
        double dnum = std::stod(str);
        double dnum1 = static_cast<float>(dnum);
        std::cout << "float: " << dnum1 << "f" << std::endl;
    }
    else if (isFloat(str))
    {
        float fnum1 = std::stof(str);
        int fnum2 = static_cast<int>(fnum1);
        std::cout << "float: " << fnum2 << "f" << std::endl;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        stringToChar(argv[1]);
        stringToInteger(argv[1]);
        stringToDouble(argv[1]);
        stringToFloat(argv[1]);
    }
    else
        std::cout << "Invalid Input" << std::endl;

    return (0);
}
