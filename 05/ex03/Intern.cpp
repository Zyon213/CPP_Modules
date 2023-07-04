#include "Intern.hpp"

// const std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
Intern::Intern()
{
}

Intern::~Intern()
{
}

const char *Intern::FormNotFound::what() const throw()
{
    return ("Form doesn't exist");
}

Form *Intern::makeForm(std::string name, std::string target)
{
    int x;
    int i;

    Form *form[] = {new ShrubberyCreationForm(target),
                    new RobotomyRequestForm(target),
                    new PresidentialPardonForm(target)};

    std::string formName[3] = {"shrubbery creation",
                               "robotomy request",
                               "presidential pardon"};
    for (i = 0; i < 3; i++)
    {
        x = name.compare(formName[i]);
        if (x == 0)
        {
            std::cout << "Intern creates " << formName[i] << std::endl;
            return (form[i]);
        }
        delete form[i];
    }
    //    delete form[i];
    std::cout << "Form name doesn't exist." << std::endl;
    return (NULL);
}