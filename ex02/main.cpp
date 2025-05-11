/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 22:08:22 by akajjou           #+#    #+#             */
/*   Updated: 2025/05/11 23:39:09 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::cout << "===== SHRUBBERY CREATION FORM TEST =====\n\n";
    try 
    {
        Bureaucrat highGrade("Gardener", 120);
        ShrubberyCreationForm garden("Garden");
        garden.beSigned(highGrade);
        highGrade.signForm(garden);
        highGrade.executeForm(garden);
    }
    catch (const std::exception& exep)
    {
        std::cerr << "Error: " << exep.what() << std::endl;
    }
    std::cout << "\n--- SHRUBBERY CREATION FORM TEST END ---\n\n";

    std::cout << "===== RobotomyRequestForm FORM TEST =====\n\n";
    try 
    {
        Bureaucrat highGrade_robot("Gardener", 46);
        RobotomyRequestForm garden_robot("Garden_robot");
        garden_robot.beSigned(highGrade_robot);
        highGrade_robot.signForm(garden_robot);
        highGrade_robot.executeForm(garden_robot);
    }
    catch (const std::exception& exep)
    {
        std::cerr << "Error: " << exep.what() << std::endl;
    }
    std::cout << "===== RobotomyRequestForm FORM TEST END =====\n\n";
    std::cout << "===== PresidentialPardonForm FORM TEST =====\n\n";
    try 
    {
        Bureaucrat highGrade_president("Gardener", 40);
        PresidentialPardonForm garden_president("Garden_president");
        garden_president.beSigned(highGrade_president);
        highGrade_president.signForm(garden_president);
        highGrade_president.executeForm(garden_president);
    }
    catch (const std::exception& exep)
    {
        std::cerr << "Error: " << exep.what() << std::endl;
    }
    std::cout << "===== PresidentialPardonForm FORM TEST END =====\n\n";
    return 0;
}