/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 22:08:22 by akajjou           #+#    #+#             */
/*   Updated: 2025/05/12 23:33:35 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    std::cout << "\n---------------Test with valaible Form Name---------------\n\n";
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
    delete rrf;
    // std::cout << "\n---------------Test with a unvalaible Form Name---------------\n\n";
    // AForm * test;
    // test = someRandomIntern.makeForm("makaynch", "Bender");

    return 0;
}