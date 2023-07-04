#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
private:
    const std::string target;
    ShrubberyCreationForm();

public:
    static const std::string &name;
    ShrubberyCreationForm(const std::string &Target);
    virtual ~ShrubberyCreationForm();
    void execute(Bureaucrat const &executor) const;

    class UnableToOpenFile : public std::exception
    {
    public:
        const char *what() const throw();
    };
};
#endif