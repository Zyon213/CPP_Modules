#ifndef TEST004_H
#define TEST004_H

#include <iostream>

typedef struct data_t
{
    int n1;
    std::string name;
} data_t;

uintptr_t serial(data_t *ptr);
data_t *deserial(uintptr_t raw);

class A
{
private:
    int n;
    std::string name;
    data_t *s_data;

public:
    A();
    virtual ~A();
    int getN(void) const;
    std::string getName(void) const;
    void setN(int N);
    void setName(std::string Name);
    void setData(int N, std::string Name);
    data_t *getData(void);
    uintptr_t serialA(A *a);
    A *deserialA(uintptr_t raw);
};

std::ostream &operator<<(std::ostream &output, A &a);
#endif
