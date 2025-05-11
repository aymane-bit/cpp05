/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 19:57:46 by akajjou           #+#    #+#             */
/*   Updated: 2025/05/11 23:15:16 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP


# include "AForm.hpp"
# include <iostream>
# include <cstdlib>
# include <fstream>

class AForm;

class RobotomyRequestForm : public AForm
{
    private :
        std::string _target;
    public :
    // C.O.F
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &original);
        RobotomyRequestForm(std::string name);
        ~RobotomyRequestForm();
        RobotomyRequestForm& operator=(const RobotomyRequestForm &original);
    // mm fct
        void execute(Bureaucrat const &executor) const;
};




#endif