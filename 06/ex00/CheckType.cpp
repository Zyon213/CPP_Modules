#include "CheckType.hpp"

CheckType::CheckType()
{
}

CheckType::~CheckType()
{
}

int CheckType::isDigit(std::string str)
{
    int i = 0;
    if (str[0] == '-' || str[i] == '+')
        ++i;
    for (i; i < str.length(); i++)
    {

        if (std::isdigit(str[i]) == false)
            return (0);
    }
    return (1);
}

int CheckType::isDouble(std::string str)
{
    if (str == "+inf" || str == "-inf")
        return (1);
    int len = str.length();
    int i = 0;
    if (str[0] == '-' || str[i] == '+')
        ++i;
    for (i; i < len; i++)
    {

        if (str[i] == '.')
            break;
        else if (std::isdigit(str[i]) == false)
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
        return (1);
    }
    return (0);
}

int CheckType::isFloat(std::string str)
{
    if (str == "+inff" || str == "-inff")
        return (1);
    int len = str.length();
    std::string str1 = str.substr(0, (len - 1));
    if (isDouble(str1) && str[len - 1] == 'f')
        return (1);
    else
        return (0);
}