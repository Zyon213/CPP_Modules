#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template <class T>
class Array
{
private:
    T *arr;
    unsigned int n;

public:
    Array<T>();
    Array<T>(unsigned int N);
    Array<T>(T Arr[], unsigned int N);
    Array<T>(const Array<T> &array);
    Array<T> &operator=(const Array<T> &array);
    T &operator[](const unsigned int N);
    void setN(unsigned int N);
    unsigned int size(void);
    void displayArray(void);
    void deleteArr(void);
    ~Array();

    class OutOfRangeException : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

template <class T>
Array<T>::Array()
{
    arr = new T[0];
    n = 0;
}

template <class T>
Array<T>::Array(unsigned int N)
{
    n = N;
    arr = new T(N);
    for (unsigned int i = 0; i < N; i++)
        arr[i] = 1;
}

template <class T>
Array<T>::Array(T Arr[], unsigned int N)
{
    arr = new T[N];
    n = N;
    for (unsigned int i = 0; i < N; i++)
        arr[i] = Arr[i];
}

template <class T>
Array<T>::Array(const Array<T> &array)
{
    n = array.n;
    arr = new T(array.n);
    for (unsigned int i = 0; i < array.n; i++)
        arr[i] = array.arr[i];
}

template <class T>
Array<T> &Array<T>::operator=(const Array<T> &array)
{
    this->n = array.n;
    this->arr = new T(array.n);
    for (unsigned int i = 0; i < array.n; i++)
        this->arr[i] = array.arr[i];
    return (*this);
}

template <class T>
T &Array<T>::operator[](unsigned int N)
{
    if (N >= n || N == 0)
        throw Array<T>::OutOfRangeException();
    return (arr[N]);
}
template <class T>
void Array<T>::setN(unsigned int N)
{
    n = N;
    arr = new T(N);
    for (unsigned int i = 0; i < N; i++)
        arr[i] = 2;
}

template <class T>
unsigned int Array<T>::size(void)
{
    return (n);
}

template <class T>
void Array<T>::deleteArr(void)
{
    for (unsigned int i = 0; i < n; i++)
        delete &arr[i];
}

template <class T>
void Array<T>::displayArray(void)
{
    try
    {
        for (unsigned int i = 0; i < this->n; i++)
            std::cout << this->arr[i] << " ";
        std::cout << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

template <class T>
const char *Array<T>::OutOfRangeException::what() const throw()
{
    return ("Our of range exception");
}

template <class T>
Array<T>::~Array()
{
    delete[] arr;
}
#endif