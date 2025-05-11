/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:02:28 by akajjou           #+#    #+#             */
/*   Updated: 2025/05/11 23:46:05 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

// C.O.F

Form::~Form()
{
    std::cout << "Destructor for the Form " << getName() << " is called\n";
}

Form::Form() : name("DefaultForm") , sign_grade(50) , execute_grade(50)
{   
    std::cout << "Form default constructor called\n";
    is_signed = false;
}

Form::Form(std::string _name, int set_sgrade, int set_egrade)  : name(_name) , sign_grade(set_sgrade) , execute_grade(set_egrade)
{
    is_signed = false;
    if (set_sgrade < 1 || set_egrade < 1)
        throw GradeTooHighException();
    if (set_sgrade > 150 || set_egrade > 150)
        throw GradeTooLowException();
    std::cout << "the Form with the name: " << getName() << " and the sign grade of " << getSgrade()
    << " and the execute grade of " << getEgrade() << " constuctor is called\n";
}

Form::Form(const Form& original) : name(original.name) , sign_grade(original.sign_grade) , execute_grade(original.execute_grade)
{
    std::cout << "Form copy constructor called\n";
    is_signed = original.is_signed;
}

Form& Form::operator=(const Form &original)
{
    if (this != &original)
        is_signed = original.is_signed;
    return (*this);
}

// mm fct

void    Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= getSgrade())
        is_signed = true;
    else
    throw GradeTooLowException();    
}

// getter

std::string     Form::getName()
{
    return name;
}

int     Form::getSgrade()
{
    return sign_grade;
}

int     Form::getEgrade()
{
    return execute_grade;
}

bool    Form::getBool()
{
    return is_signed;
}

// what ov
const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Form::Grades too HIGH");
};

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Form::Grades too LOW");
};

// << 
std::ostream	&operator<<(std::ostream &o, Form &a)
{
	o << "The Form by the name " << a.getName() << " and the sign grade of " << a.getSgrade()
    << " and the execute grade of " << a.getEgrade();
    if (a.getBool() == true)
        o << " is signed\n";
    else
    o << " is not signed!\n";
	return (o);
}
