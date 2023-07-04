#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &Name, int Grade) : name(Name)
{
    if (Grade < 1)
        throw GradeTooHighException();
    if (Grade > 150)
        throw GradeTooLowException();
    grade = Grade;
}

Bureaucrat::~Bureaucrat()
{
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
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Grade is decremented" << std::endl;
}

void Bureaucrat::signForm(Form &form)
{
    //    form.beSigned(*this);

    if (form.getCheckSign() == true)
        std::cout << getName() << " signed " << form.getName() << std::endl;
    else
    {
        std::cout << getName() << " couldn't sign " << form.getName();
        std::cout << " because, You have entered too low grade" << std::endl;
    }
}
std::ostream &operator<<(std::ostream &output, const Bureaucrat &burea)
{
    output << burea.getName();
    return (output);
}