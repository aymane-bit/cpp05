/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 23:32:45 by akajjou           #+#    #+#             */
/*   Updated: 2025/05/11 23:34:32 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP


# include "AForm.hpp"
# include <iostream>
# include <cstdlib>
# include <fstream>

class AForm;

class PresidentialPardonForm : public AForm
{
    private :
        std::string _target;
    public :
    // C.O.F
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &original);
        PresidentialPardonForm(std::string name);
        ~PresidentialPardonForm();
        PresidentialPardonForm& operator=(const PresidentialPardonForm &original);
    // mm fct
        void execute(Bureaucrat const &executor) const;
};




#endif