#include "RobotomyRequestForm.hpp"

const std::string &RobotomyRequestForm::name = std::string("robotomy request");

RobotomyRequestForm::RobotomyRequestForm(const std::string &Target) : Form(RobotomyRequestForm::name, 72, 45), target(Target)
{
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}

const char *RobotomyRequestForm::RobotomyFailed::what() const throw()
{
    return ("Robotomy Failed");
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > RobotomyRequestForm::getExeGrade())
        throw GradeTooLowException();
    if (RobotomyRequestForm::getCheckSign() == true)
        throw GradeAlreadySigned();

    srand(time(NULL));
    int t;
    t = rand() % 2;
    if (t)
        std::cout << this->name << " has been robotomized successfully 50\% of the time" << std::endl;
    else
        throw RobotomyFailed();
}