/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:21:47 by akajjou           #+#    #+#             */
/*   Updated: 2025/05/09 22:31:12 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <iostream>
# include <fstream>

class AForm;

class ShrubberyCreationForm : public AForm
{
    private :
        std::string _target;
    public :
    // C.O.F
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &original);
        ShrubberyCreationForm(std::string name);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &original);
    // mm fct
        void execute(Bureaucrat const &executor) const;
};



#endif