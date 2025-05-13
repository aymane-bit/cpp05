/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 22:08:22 by akajjou           #+#    #+#             */
/*   Updated: 2025/05/13 23:30:50 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
    std::cout << "\n---------------Test with valaible Form Name---------------\n\n";
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
    std::cout << "\n---------------Test with a unvalaible Form Name---------------\n\n";
    AForm *test;
    test = someRandomIntern.makeForm("makaynch", "Bender");
    std::cout << "\n---------------Test END-------------------------------\n";
    delete rrf;
    delete test;
    return 0;
}