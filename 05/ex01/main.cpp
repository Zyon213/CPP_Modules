#include "Bureaucrat.hpp"
//#include "Form.hpp"

int main()
{
    std::cout << "********************************" << std::endl;
    Bureaucrat b("Dragon", 111);
    Form f("Tiger", 15, 100);
    try
    {

        b.signForm(f);
        f.beSigned(b);
        b.signForm(f);
        std::cout << b << " have successully signed " << f << std::endl;
    }
    catch (const std::exception &e)
    {

        std::cout << b << " couldn't sign " << f << " because, ";
        std::cerr << e.what() << std::endl;
    }
    std::cout << "********************************" << std::endl;

    Bureaucrat b1("Elephant", 11);
    Form f1("Hipopotomus", 15, 100);
    try
    {

        f.beSigned(b1);
        b.signForm(f1);
        std::cout << b1 << " have successully signed " << f1 << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << b1 << " couldn't sign " << f1 << " because, ";
        std::cerr << e.what() << std::endl;
    }
    std::cout << "********************************" << std::endl;

    Bureaucrat b2("Dinosurus", 11);
    Form f2("Shark", 11, 100);
    try
    {

        f2.beSigned(b2);
        b2.signForm(f2);
        b2.decrementGrade();
        b2.decrementGrade();
        b2.decrementGrade();
        std::cout << b2.getGrade() << "  " << f2.getSignGrade() << std::endl;

        f2.beSigned(b2);

        b2.signForm(f2);
        std::cout << b2.getGrade() << "  " << f2.getSignGrade() << std::endl;

        std::cout << b2 << " have successully signed " << f2 << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << b2 << " couldn't sign " << f2 << " because, ";
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
