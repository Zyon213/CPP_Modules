#include "Bureaucrat.hpp"

int main()
{
    std::string name;
    int grade;

    std::cout << "Insert a name: ";
    std::cin >> name;
    std::cout << "Insert a grade: ";
    std::cin >> grade;
    try
    {
        Bureaucrat b(name, grade);
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
    }
    catch (const Bureaucrat::GradeTooHighException &ghigh)
    {
        std::cout << ghigh.GradeTooHighException::what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException &glow)
    {
        std::cout << glow.GradeTooLowException::what() << std::endl;
    }
    Bureaucrat b(name, grade);

    std::cout << b;

    try
    {
        b.decrementGrade();
        b.decrementGrade();
    }
    catch (const Bureaucrat::GradeTooLowException &glow)
    {
        std::cout << glow.GradeTooLowException::what() << std::endl;
    }

    try
    {
        b.incrementGrade();
        b.incrementGrade();
    }
    catch (const Bureaucrat::GradeTooHighException &glow)
    {
        std::cout << glow.GradeTooHighException::what() << std::endl;
    }
    std::cout << b;

    return (0);
}
