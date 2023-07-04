#include "CastType.hpp"

int main(int argc, char **argv)
{
    CastType ctype;
    ;
    if (argc == 2)
    {
        ctype.stringToChar(argv[1]);
        ctype.stringToInteger(argv[1]);
        ctype.stringToFloat(argv[1]);
        ctype.stringToDouble(argv[1]);
    }
    else
        std::cout << "Invalid Input" << std::endl;

    return (0);
}
