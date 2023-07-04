#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include <iostream>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
private:
    const std::string target;
    PresidentialPardonForm();

public:
    static const std::string &name;
    PresidentialPardonForm(const std::string &Target);
    virtual ~PresidentialPardonForm();
    void execute(Bureaucrat const &executor) const;
};
#endif