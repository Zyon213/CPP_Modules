#include "Span.hpp"

Span::Span(unsigned int n) : N(n)
{
}

Span::Span(const Span &span)
{
    N = span.N;
    t = span.t;
}

Span &Span::operator=(const Span &span)
{
    N = span.N;
    t = span.t;
    return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int num)
{
    if (this->t.size() < N)
        this->t.push_back(num);
    else
        throw ExcessNumber();
}

int Span::shortestSpan(void)
{

    shortest = *(t.begin());

    if (t.size() == 1 || t.empty())
        throw NoNumberFound();
    else
    {
        min = t.begin();
        max = min + 1;
        shortest = std::abs(*max - *min);

        for (min = t.begin(); min != t.end() - 1; min++)
        {
            for (max = min + 1; max != t.end(); max++)
            {
                if (std::abs(max - min) < shortest)
                    shortest = std::abs(*max - *min);
            }
        }
    }
    std::cout << "Shortest number is: " << shortest << std::endl;
    return (shortest);
}

int Span::longestSpan(void)
{
    longest = *(t.begin());
    if (t.size() == 1 || t.empty())
        throw NoNumberFound();
    else
    {
        max = std::max_element(t.begin(), t.end());
        min = std::min_element(t.begin(), t.end());
        longest = std::abs(*max - *min);
    }
    std::cout << "Longest number is: " << longest << std::endl;
    return (longest);
}

void Span::diplayVector(void)
{
    if (t.empty())
        std::cout << "Empty vector" << std::endl;
    else
    {
        for (i = t.begin(); i != t.end(); i++)
            std::cout << *i << " ";
    }
    std::cout << std::endl;
}

const char *Span::ExcessNumber::what() const throw()
{
    return ("Excess number of input");
}

const char *Span::NoNumberFound::what() const throw()
{
    return ("Excess number of input");
}