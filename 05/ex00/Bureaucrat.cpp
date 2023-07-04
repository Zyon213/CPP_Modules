#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    //    std::cout << "Default constructor called" << std::endl;
    name = "None";
    grade = 0;
}

Bureaucrat::Bureaucrat(std::string Name, int Grade)
{
    // std::cout << "Default parameter constructor called" << std::endl;
    name = Name;

    if (Grade < 1)
        throw GradeTooHighException();
    if (Grade > 150)
        throw GradeTooLowException();
    grade = Grade;

    /*     try
        {
            if ((Grade < 1) || (Grade > 150))
            {
                throw(Grade);
            }
            else
            {
                name = Name;
                grade = Grade;
            }
        }
        catch (int num)
        {
            if (num < 1)
                Bureaucrat::GradeTooLowException();
            else if (num > 150)
                Bureaucrat::GradeTooHighException();
        } */
}

Bureaucrat::~Bureaucrat()
{
    //    std::cout << "Default destructor called" << std::endl;
}

std::string Bureaucrat::getName(void) const
{
    return (name);
}

int Bureaucrat::getGrade(void) const
{
    return (grade);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("You have entered higher grade");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("You have entered a lower grade");
}

void Bureaucrat::incrementGrade(void)
{
    --grade;
    if (grade < 1)
        throw GradeTooHighException();
    std::cout << "Grade is incremented" << std::endl;
}

void Bureaucrat::decrementGrade(void)
{
    ++grade;
    if (grade > 150)
        throw GradeTooLowException();
    std::cout << "Grade is decremented" << std::endl;
}

/*
void Bureaucrat::GradeTooHighException(void)
{
    std::cout << "You Enter higher number" << std::endl;
}

void Bureaucrat::GradeTooLowException(void)
{
    std::cout << "You Enter Lower number" << std::endl;
}

void Bureaucrat::incrementGrade(void)
{
    int MyGrade = Bureaucrat::getGrade();
    try
    {
        if ((MyGrade < 1) || (MyGrade > 150))
        {
            throw(MyGrade);
        }
        else
        {
            --grade;
        }
    }
    catch (int num)
    {
        if (num < 1)
            Bureaucrat::GradeTooLowException();
        else if (num > 150)
            Bureaucrat::GradeTooHighException();
    }
}

void Bureaucrat::decrementGrade(void)
{
    int MyGrade = Bureaucrat::getGrade();
    try
    {
        if ((MyGrade < 1) || (MyGrade > 150))
        {
            throw(MyGrade);
        }
        else
        {
            ++grade;
        }
    }
    catch (int num)
    {
        if (num < 1)
            Bureaucrat::GradeTooLowException();
        else if (num > 150)
            Bureaucrat::GradeTooHighException();
    }
}
 */
std::ostream &operator<<(std::ostream &output, const Bureaucrat &burea)
{
    output << burea.getName();
    output << ", bureaucrat grade ";
    output << burea.getGrade() << std::endl;
    return (output);
}