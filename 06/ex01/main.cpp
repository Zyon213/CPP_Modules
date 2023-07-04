#include "A.hpp"

int main()
{
    /*  std::cout << "******************************" << std::endl;
     data_t *d = new data_t;
     data_t *b;
     d->n1 = 43;
     d->name = "yonas";
     std::cout << d->n1 << " " << d->name << std::endl;

     uintptr_t ptr;
     ptr = reinterpret_cast<uintptr_t>(d);

     //    std::cout << ptr->n1 << " " << ptr->name << std::endl;
     b = reinterpret_cast<data_t *>(ptr);
     std::cout << b->n1 << " " << b->name << std::endl;

     delete d;
*/
    std::cout << "******************************" << std::endl;
    data_t *p = new data_t;
    data_t *p1;
    uintptr_t raw;
    p->n1 = 98;

    p->name = "yonas";
    // serialize the struct

    raw = serial(p);
    // deserialize the pointer to struct

    p1 = deserial(raw);
    std::cout << p1->n1 << " " << p1->name << std::endl;
    delete p;

    std::cout << "******************************" << std::endl;
    A *a = new A;
    uintptr_t raw1;
    A *b;
    a->setN(547);
    a->setName("abu dhabi");

    // serialize the class
    raw1 = a->serialA(a);

    // deserialize the pointer to class object
    b = a->deserialA(raw1);

    data_t *d;
    b->setData(65, "abegaz");
    d = b->getData();
    std::cout << d->n1 << " " << d->name << std::endl;
    std::cout << *b << std::endl;

    delete a;
    delete d;

    return (0);
}