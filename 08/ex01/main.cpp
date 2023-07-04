#include "Span.hpp"

int main()
{
    std::cout << "*********************************" << std::endl;

    Span span(10000);
    std::srand(time(NULL));

    span.diplayVector();

    try
    {
        for (int i = 0; i < 10; i++)
        {
            int rnd = ((std::rand() % 100) + 1);
            span.addNumber(rnd);
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "*********************************" << std::endl;

    try
    {
        span.longestSpan();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "*********************************" << std::endl;

    try
    {
        span.shortestSpan();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "*********************************" << std::endl;
    try
    {
        for (int i = 0; i < 10020; i++)
        {
            int rnd = ((std::rand() % 100) + 1);
            span.addNumber(rnd);
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "*********************************" << std::endl;

    Span span1(10);
    std::srand(time(NULL));

    try
    {
        for (int i = 0; i < 10; i++)
        {
            int rnd = ((std::rand() % 10) + 1);
            span1.addNumber(rnd);
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    span1.diplayVector();

    std::cout << "*********************************" << std::endl;

    try
    {
        span1.longestSpan();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "*********************************" << std::endl;

    try
    {
        span1.shortestSpan();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}