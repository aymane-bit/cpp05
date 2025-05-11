/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 22:08:22 by akajjou           #+#    #+#             */
/*   Updated: 2025/05/11 23:20:29 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

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

    return 0;
}