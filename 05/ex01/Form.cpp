#include "Form.hpp"

Form::Form(const std::string &n, int sg, int eg) : name(n), checkSign(false), signGrade(sg), exeGrade(eg)
{
    if (signGrade < 1 || exeGrade < 1)
        throw Form::GradeTooHighException();
    if (signGrade > 150 || exeGrade > 150)
        throw Form::GradeTooLowException();
}
Form::~Form()
{
}

std::string Form::getName(void) const
{
    return name;
}

bool Form::getCheckSign(void)
{
    return (checkSign);
}

int Form::getSignGrade(void) const
{
    return (signGrade);
}

int Form::getExeGrade(void) const
{
    return (exeGrade);
}

void Form::beSigned(Bureaucrat &burea)
{
    if (burea.getGrade() > signGrade)
        throw Form::GradeTooLowException();
    checkSign = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("You have entered higher grade");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("You have entered a lower grade");
}

std::ostream &operator<<(std::ostream &output, const Form &form)
{
    output << form.getName();
    return output;
}