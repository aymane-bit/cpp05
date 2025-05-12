/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 02:25:59 by akajjou           #+#    #+#             */
/*   Updated: 2025/05/12 23:38:26 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

// C.O.F
Intern::Intern()
{
    std::cout << "The Intern Constructor Is Called\n";
}

Intern::Intern(const Intern &original)
{
    std::cout << "The Intern Copy Constructor Is Called\n";
    (void) original;
}

Intern& Intern::operator=(const Intern &original)
{
    std::cout << "The Intern Copy Assignement Operator Is Called\n";
    (void) original;
    return *this;
}

Intern::~Intern()
{
    std::cout << "The Intern Destructor Is Called\n";
}

// mm fct

AForm* Intern::makeForm(std::string FormName, std::string FormTarget)
{
    std::string targets[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    int i = 0;
    while (i < 3 && FormName != targets[i])
        i++;
    switch (i)
    {
        case 0:
            std::cout << "Intern create " << FormName << std::endl;
            return (new ShrubberyCreationForm(FormTarget));
        case 1:
            std::cout << "Intern create " << FormName << std::endl;
            return (new RobotomyRequestForm(FormTarget));
        case 2:
            std::cout << "Intern create " << FormName << std::endl;
            return (new PresidentialPardonForm(FormTarget));
        default:
            std::cout << "This Form is not avalaible\n";
            return (NULL);
    }    
}
