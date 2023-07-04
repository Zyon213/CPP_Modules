#ifndef CHECKTYPE_H
#define CHECKTYPE_H

#include <iostream>
#include <typeinfo>
#include <string>
#include <cctype>
#include <iomanip>
#include <cmath>
//#include <cmath.h>
#include <bits/stdc++.h>

class CheckType
{
public:
    CheckType();
    ~CheckType();
    int isDigit(std::string str);
    int isDouble(std::string str);
    int isFloat(std::string str);
};

#endif