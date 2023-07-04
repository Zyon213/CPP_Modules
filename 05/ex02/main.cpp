#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <fstream>
#include <iostream>

int main()
{
    std::cout << "********************************" << std::endl;

    Bureaucrat b("Lion", 149);
    Form *f = new ShrubberyCreationForm("home");
    try
    {

        //    f->execute(b);
        b.executeForm(*f);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "********************************" << std::endl;

    Bureaucrat b1("Tiger", 14);
    Form *f1 = new ShrubberyCreationForm("Office");
    try
    {

        //    f1->execute(b1);
        b1.executeForm(*f1);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "********************************" << std::endl;

    Bureaucrat b2("Butterfly", 1);
    Form *f2 = new RobotomyRequestForm("School");
    try
    {
        b2.executeForm(*f2);
        //    f2->execute(b2);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "********************************" << std::endl;

    Bureaucrat b3("Dragon", 150);
    Form *f3 = new RobotomyRequestForm("Ground");
    try
    {
        b3.executeForm(*f3);
        //    f3->execute(b3);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "********************************" << std::endl;

    Bureaucrat b4("Grasshopper", 1);
    Form *f4 = new PresidentialPardonForm("Library");
    try
    {
        b4.executeForm(*f4);
        //    f4->execute(b4);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "********************************" << std::endl;

    Bureaucrat b5("Monkey", 100);
    Form *f5 = new PresidentialPardonForm("Jungle");
    try
    {
        b5.executeForm(*f5);
        //    f5->execute(b5);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    delete f;
    delete f1;
    delete f2;
    delete f3;
    delete f4;
    delete f5;
    return (0);
}
