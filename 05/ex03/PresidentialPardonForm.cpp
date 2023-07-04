#include "PresidentialPardonForm.hpp"

const std::string &PresidentialPardonForm::name = "presidential pardon";

PresidentialPardonForm::PresidentialPardonForm(const std::string &Target) : Form(PresidentialPardonForm::name, 25, 5), target(Target)
{
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > PresidentialPardonForm::getExeGrade())
        throw GradeTooLowException();
    if (PresidentialPardonForm::getCheckSign() == true)
        throw GradeAlreadySigned();

    std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}