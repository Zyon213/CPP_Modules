#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <exception>

class Bureaucrat
{
private:
    std::string name;
    int grade;

public:
    Bureaucrat();
    Bureaucrat(std::string Name, int Grade);
    virtual ~Bureaucrat();
    std::string getName(void) const;
    int getGrade(void) const;
    void incrementGrade(void);
    void decrementGrade(void);

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
    // void GradeTooHighException(void);
    // void GradeTooLowException(void);
};

std::ostream &operator<<(std::ostream &output, const Bureaucrat &burea);
#endif
