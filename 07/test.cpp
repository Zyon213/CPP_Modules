#include <iostream>

template <class T>
class Array
{
private:
    T *prt;
    int n;

public:
    Array();
    Array(T array[], int N);
};

template <class T>
Array<T>::Array()
{
}

template <class T>
Array<T>::Array(T aa[], int bb)
{
    a = new T[bb];
    b = bb;
    for (int i = 0; i < bb; i++)
        a[i] = aa[i];
}

int main()
{
    Array *arr[] = new Array;
    return (0);
}