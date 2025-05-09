/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:02:28 by akajjou           #+#    #+#             */
/*   Updated: 2025/05/09 23:01:23 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AForm.hpp"

// C.O.F

AForm::~AForm()
{
    std::cout << "Destructor for the AForm " << getName() << " is called\n";
}

AForm::AForm() : name("DefaultAForm") , sign_grade(50) , execute_grade(50)
{   
    std::cout << "AForm default constructor called\n";
    is_signed = false;
}

AForm::AForm(std::string _name, int set_sgrade, int set_egrade)  : name(_name) , sign_grade(set_sgrade) , execute_grade(set_egrade)
{
    is_signed = false;
    if (set_sgrade < 1 || set_egrade < 1)
        throw GradeTooHighException();
    if (set_sgrade > 150 || set_egrade > 150)
        throw GradeTooLowException();
    std::cout << "the AForm with the name: " << getName() << " and the sign grade of " << getSgrade()
    << " and the execute grade of " << getEgrade() << " constuctor is called\n";
}

AForm::AForm(const AForm& original) : name(original.name) , sign_grade(original.sign_grade) , execute_grade(original.execute_grade)
{
    std::cout << "AForm copy constructor called\n";
    is_signed = original.is_signed;
}

AForm& AForm::operator=(const AForm &original)
{
    if (this != &original)
        is_signed = original.is_signed;
    return (*this);
}

// mm fct

void    AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= getSgrade())
        is_signed = true;
    else
    throw GradeTooLowException();
}

// void AForm::execute(Bureaucrat const & executor) const
// {
    
// }   

// getter

std::string     AForm::getName()
{
    return (name);
}

int     AForm::getSgrade() const
{
    return (sign_grade);
}

int     AForm::getEgrade() const
{
    return (execute_grade);
}

bool    AForm::getBool() const
{
    return (is_signed);
}

// what ov
const char *AForm::GradeTooHighException::what(void) const throw()
{
	return ("AForm::Grades too HIGH");
};

const char *AForm::GradeTooLowException::what(void) const throw()
{
	return ("AForm::Grades too LOW");
};

const char *AForm::FormNotSigned::what(void) const throw()
{
	return ("AForm::This Form Is Not Signed");
};

// << 
std::ostream	&operator<<(std::ostream &o, AForm &a)
{
	o << "The AForm by the name " << a.getName() << " and the sign grade of " << a.getSgrade()
    << " and the execute grade of " << a.getEgrade();
    if (a.getBool() == true)
        o << " is signed\n";
    else
    o << " is not signed!\n";
	return (o);
}