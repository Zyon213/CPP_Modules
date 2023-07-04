#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string name;
    bool checkSign;
    int const signGrade;
    int const exeGrade;

public:
    Form(const std::string &n, int sg, int eg);
    ~Form();
    std::string getName(void) const;
    bool getCheckSign(void);
    int getSignGrade(void) const;
    int getExeGrade(void) const;
    void beSigned(Bureaucrat &burea);

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };
};
std::ostream &operator<<(std::ostream &output, const Form &form);
#endif