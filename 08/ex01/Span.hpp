#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>

class Span
{
private:
    std::vector<int> t;
    unsigned int N;

public:
    std::vector<int>::iterator i;
    std::vector<int>::iterator max;
    std::vector<int>::iterator min;

    int shortest;
    int longest;

    Span(unsigned int n);
    Span(const Span &span);
    Span &operator=(const Span &span);
    ~Span();
    void addNumber(int num);
    int shortestSpan(void);
    int longestSpan(void);
    void diplayVector(void);

    template <typename T>
    void addNumber(T begin, T end)
    {
        if (std::distance(begin, end) > N)
            throw ExcessNumber();
        for (; begin != end; ++begin)
            t.push_back(*begin);
    }

    class ExcessNumber : public std::exception
    {
    public:
        const char *what() const throw();
    };

    class NoNumberFound : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

#endif
