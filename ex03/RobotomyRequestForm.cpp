/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 19:59:32 by akajjou           #+#    #+#             */
/*   Updated: 2025/05/11 23:18:26 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

// C.O.F
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm_Def", 72, 45)
{
    _target = "default";
    std::cout << "RobotomyRequestForm default constructor is called\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor is called for " << _target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : AForm("RobotomyRequestForm", 72, 45)
{
    _target = name;    
    std::cout << "RobotomyRequestForm constructor is called for the target " << _target << std::endl;    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &original)
{
    this->_target = original._target; 
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &original)
{
    if (this != &original)
        this->_target = original._target;
    return *this;
}

//mm fct

void RobotomyRequestForm::execute(Bureaucrat const &executor) const 
{
    if (!getBool())
        throw AForm::FormNotSigned();
    if (executor.getGrade() > getEgrade())
        throw Bureaucrat::GradeTooLowException();
    std::cout << "*Drilling noises *jejejejjejejejjejejeje\n";
    srand(time(0));
    int randomNum = rand() % 101;
    if (randomNum % 2 == 0)
        std::cout << "The target " << _target << " Has Been Robotomized successfully\n";
    else
        std::cout << "The target " << _target << " robotomy failed\n";
}