#ifndef ROBOTOMYrEQUESTFORM_H
#define ROBOTOMYrEQUESTFORM_H

#include <iostream>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form
{
private:
    const std::string target;
    RobotomyRequestForm();

public:
    static const std::string &name;
    RobotomyRequestForm(const std::string &Target);
    virtual ~RobotomyRequestForm();
    void execute(Bureaucrat const &executor) const;

    class RobotomyFailed : public std::exception
    {
    public:
        const char *what() const throw();
    };
};
#endif