#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <fstream>
#include <iostream>

int main()
{
    std::cout << "********************************" << std::endl;

    Intern i;
    Form *f;

    try
    {
        f = i.makeForm("presidential pardon", "office");
        std::cout << f->getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "********************************" << std::endl;

    Intern i1;
    Form *f1;

    try
    {
        f1 = i1.makeForm("shrubbery creation", "home");
        std::cout << f1->getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "********************************" << std::endl;

    Intern i2;
    Form *f2;
    try
    {
        f2 = i2.makeForm("robotomy request", "Jungle");
        std::cout << f2->getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "********************************" << std::endl;

    Intern i3;
    Form *f3;
    try
    {
        f3 = i3.makeForm("Prime Minister pardon", "Parlament");
        //    std::cout << f3->getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    delete f;
    delete f1;
    delete f2;
    delete f3;

    return (0);
}
