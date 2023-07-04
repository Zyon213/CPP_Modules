#ifndef INTERN_H
#define INTERN_H

#include <iostream>

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{

public:
    Intern();
    virtual ~Intern();
    Form *makeForm(std::string name, std::string target);

    class FormNotFound : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

#endif