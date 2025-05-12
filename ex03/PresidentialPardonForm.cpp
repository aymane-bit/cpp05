/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 23:32:45 by akajjou           #+#    #+#             */
/*   Updated: 2025/05/11 23:35:41 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

// C.O.F
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm_Def", 25, 5)
{
    _target = "default";
    std::cout << "PresidentialPardonForm default constructor is called\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor is called for " << _target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name) : AForm("PresidentialPardonForm", 25, 5)
{
    _target = name;    
    std::cout << "PresidentialPardonForm constructor is called for the target " << _target << std::endl;    
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &original)
{
    this->_target = original._target; 
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &original)
{
    if (this != &original)
        this->_target = original._target;
    return *this;
}

//mm fct

void PresidentialPardonForm::execute(Bureaucrat const &executor) const 
{
    if (!getBool())
        throw AForm::FormNotSigned();
    if (executor.getGrade() > getEgrade())
        throw Bureaucrat::GradeTooLowException();
    std::cout << _target <<  " has been pardoned by Zaphod Beeblebrox\n";
}