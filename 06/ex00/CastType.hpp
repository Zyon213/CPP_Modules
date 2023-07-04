#ifndef CASTTYPE_H
#define CASTTYPE_H

#include "CheckType.hpp"

class CastType : public CheckType
{
public:
    CastType();
    ~CastType();
    void stringToChar(std::string str);
    void stringToInteger(std::string str);
    void stringToDouble(std::string str);
    void stringToFloat(std::string str);
};

#endif