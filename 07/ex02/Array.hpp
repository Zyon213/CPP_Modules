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
    Array()
    {
        arr = new T[0];
        n = 0;
    }

    Array(unsigned int N)
    {
        n = N;
        arr = new T(N);
        for (unsigned int i = 0; i < N; i++)
            arr[i] = 1;
    }

    Array(T t, unsigned int N)
    {
        n = N;
        arr = new T(N);
        for (unsigned int i = 0; i < N; i++)
            arr[i] = t;
    }

    Array(const Array &array)
    {
        n = array.n;
        arr = new T(array.n);
        for (unsigned int i = 0; i < array.n; i++)
            arr[i] = array.arr[i];
    }

    Array &operator=(const Array &array)
    {
        this->n = array.n;
        this->arr = new T(array.n);
        for (unsigned int i = 0; i < array.n; i++)
            this->arr[i] = array.arr[i];
        return (*this);
    }

    T &operator[](int N)
    {
        if (N >= n || N == 0)
            throw OutOfRange();
        return (arr[N]);
    }

    void setN(unsigned int N)
    {
        n = N;
        arr = new T(N);
        for (unsigned int i = 0; i < N; i++)
            arr[i] = 2;
    }

    unsigned int size(void)
    {
        return (n);
    }

    void displayArray(void)
    {
        for (unsigned int i = 0; i < this->n; i++)
            std::cout << this->arr[i] << " ";
        std::cout << std::endl;
    }

    void deleteArr(void)
    {
        for (unsigned int i = 0; i < n; i++)
            delete &arr[i];
    }

    ~Array()
    {
        delete this->arr;
    }

    class OutOfRange : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

template <class T>
const char *Array<T>::OutOfRange::what() const throw()
{
    return ("Index is out of bound");
}

#endif