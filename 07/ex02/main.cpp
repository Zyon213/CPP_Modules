#include "Array.hpp"

int main()
{
    std::cout << "**************************" << std::endl;
    // construction with no parameter
    Array<char> arr;
    try
    {
        std::cout << "char: " << arr[0] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "**************************" << std::endl;

    // constructor with unsigned int n as a parameter
    Array<int> arr1(5);
    arr1.displayArray();

    std::cout << "**************************" << std::endl;

    // construction using copy constructor

    Array<int> arr2(6);
    Array<int> arr3(arr2);
    arr3.displayArray();

    // change the value and the in array arr3 and this must not
    // affect array arr2 because they are created in separate memory
    //   arr3.setN(8);
    arr3[5] = 4;
    arr3.displayArray();
    arr2[2] = 5;
    arr2.displayArray();

    try
    {
        std::cout << "elenemt: " << arr2[1] << std::endl;
        std::cout << "elenemt: " << arr2[10] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "**************************" << std::endl;
    // construction using assignment operator

    Array<int> *arr4 = new Array<int>(7, 5);
    Array<int> *arr5;

    arr5 = arr4;
    arr5->displayArray();

    delete arr4;

    std::cout << "**************************" << std::endl;
    // construction using assignment operator

    Array<char> *arr6 = new Array<char>('a', 5);
    Array<char> *arr7;

    arr7 = arr6;
    arr7->displayArray();

    delete arr6;
    return (0);
}