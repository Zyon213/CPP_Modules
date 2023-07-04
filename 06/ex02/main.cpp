#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
// use this only for checking
//#include <typeinfo>

#include <ctime>

Base *generate(void)
{
    Base *base[] = {new A, new B, new C};
    std::srand(time(NULL));
    int i = std::rand() % 3;
    for (int n = 0; n < 3; n++)
    {
        if (n != i)
            delete base[n];
    }
    return (base[i]);
}

void identify_ptr(Base *p)
{
    if (dynamic_cast<A *>(p) != nullptr)
        std::cout << "type: Base A" << std::endl;
    else if (dynamic_cast<B *>(p) != nullptr)
        std::cout << "type: Base B" << std::endl;
    else if (dynamic_cast<C *>(p) != nullptr)
        std::cout << "type: Base C" << std::endl;
    else
        std::cout << "null reference" << std::endl;
}

void identify_ref(Base &p)
{
    int i = 1;
    try
    {
        dynamic_cast<A &>(p);
        std::cout << "type: Base A" << std::endl;
        i = 0;
    }
    catch (const std::exception &e)
    {
        //    std::cerr << e.what() << '\n';
    }

    try
    {
        dynamic_cast<B &>(p);
        std::cout << "type: Base B" << std::endl;
        i = 0;
    }
    catch (const std::exception &e)
    {
        //    std::cerr << e.what() << '\n';
    }
    try
    {
        dynamic_cast<C &>(p);
        std::cout << "type: Base C" << std::endl;
        i = 0;
    }
    catch (const std::exception &e)
    {
        //    std::cerr << e.what() << '\n';
    }
    if (i == 0)
        std::cout << "null reference" << std::endl;
}
int main()
{
    std::cout << "***************************" << std::endl;

    Base *b;
    b = generate();

    identify_ptr(b);
    identify_ref(*b);

    // include <typeinfo> header to check with this
    //    std::cout << typeid(*b).name() << std::endl;
    delete b;

    std::cout << "***************************" << std::endl;

    Base *b1 = new A;
    //    b1 = generate();

    identify_ptr(b1);
    identify_ref(*b1);

    // include <typeinfo> header to check with this
    //    std::cout << typeid(*b).name() << std::endl;
    delete b1;

    std::cout << "***************************" << std::endl;

    Base *b2;
    C c;
    Base b3;
    //    b1 = generate();

    identify_ptr(b2);
    identify_ref(c);
    identify_ref(b3);

    // include <typeinfo> header to check with this
    //    std::cout << typeid(*b).name() << std::endl;
    return (0);
}