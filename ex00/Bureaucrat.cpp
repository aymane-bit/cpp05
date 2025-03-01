 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:37:54 by akajjou           #+#    #+#             */
/*   Updated: 2025/02/24 17:20:14 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

// Destructor

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor is called\n";
}

Bureaucrat::Bureaucrat() : name("MaxWeber")
{
    std::cout << "Bureaucrat default constructor called\n";
    grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat& original) : name(original.name)
{
    std::cout << "Bureaucrat copy constructor called\n";
    grade = original.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &original)
{
    if (this != &original)
        grade = original.grade;
    return (*this);
}

Bureaucrat::Bureaucrat(int set_grade) : name("MaxWeber")
{
    std::cout << "Bureaucrat constructor called with the default name MaxWeber\n";
    grade = set_grade;
    // if (getGrade() < 1)
    //     throw GradeTooHighException();
    // if (getGrade() > 150)
    //     throw GradeTooLowException();

}
Bureaucrat::Bureaucrat(std::string _name) : name(_name)
{
    std::cout << "Bureaucrat with the name "<< getName() <<  " and default grade constructor called\n";
    grade = 150;
}
Bureaucrat::Bureaucrat(std::string _name, int set_grade) : name(_name)
{
    std::cout << "Bureaucrat with the name "<< getName()  <<  " constructor called\n";
    grade = set_grade;
    // if (getGrade() < 1)
    //     throw GradeTooHighException();
    // if (getGrade() > 150)
    //     throw GradeTooLowException();
}

// getter and setter


std::string  Bureaucrat::getName()
{
    return (name);
}

int Bureaucrat::getGrade()
{
    return (grade);
}
// increment & decrement

void   Bureaucrat::BureaucratIncrement()
{
    if (grade == 1)
        throw 
    grade--;
}

void   Bureaucrat::BureaucratDecrement()
{
    grade++;
}
// op overload <<

std::ostream	&operator<<(std::ostream &o, Bureaucrat *a)
{
	o << "Bureaucrat " << a->getName() << ":\n\tgrade: " << a->getGrade() << std::endl;
	return (o);
}