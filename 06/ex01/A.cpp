#include "A.hpp"

A::A()
{
}

A::~A()
{
}
int A::getN(void) const
{
    return (n);
}
std::string A::getName(void) const
{
    return name;
}
void A::setN(int N)
{
    n = N;
}
void A::setName(std::string Name)
{
    name = Name;
}

void A::setData(int N, std::string Name)
{
    data_t *d = new data_t;
    d->n1 = N;
    d->name = Name;
    s_data = d;
    /*    s_data->n1 = N;
       s_data->name = Name; */
}
data_t *A::getData(void)
{
    return (s_data);
}
uintptr_t serial(data_t *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

data_t *deserial(uintptr_t raw)
{
    return (reinterpret_cast<data_t *>(raw));
}

uintptr_t A::serialA(A *a)
{
    return (reinterpret_cast<uintptr_t>(a));
}

A *A::deserialA(uintptr_t raw)
{
    return (reinterpret_cast<A *>(raw));
}

std::ostream &operator<<(std::ostream &output, A &a)
{
    output << a.getN();
    output << " ";
    output << a.getName();
    return output;
}