#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    const std::string name;
    int grade;

public:
    //    Bureaucrat();
    Bureaucrat(const std::string &Name, int Grade);
    virtual ~Bureaucrat();
    std::string getName(void) const;
    int getGrade(void) const;
    void incrementGrade(void);
    void decrementGrade(void);
    void signForm(Form &form);

    class GradeTooHighException : std::exception
    {
    public:
        const char *what() const throw();
    };

    class GradeTooLowException : std::exception
    {
    public:
        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &output, const Bureaucrat &burea);
#endif
