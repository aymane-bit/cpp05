/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 22:08:22 by akajjou           #+#    #+#             */
/*   Updated: 2025/05/10 23:38:49 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main()
{
    std::cout << "===== SHRUBBERY CREATION FORM TEST =====" << std::endl << std::endl;

    try 
    {
        std::cout << "--- Test 1: Successful execution ---" << std::endl;
        Bureaucrat highGrade("Gardener", 100);
        ShrubberyCreationForm garden("Garden");        
        garden.beSigned(highGrade);
        highGrade.signForm(garden);
        garden.execute(highGrade);
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }


    return 0;
}