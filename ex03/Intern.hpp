/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 02:20:18 by akajjou           #+#    #+#             */
/*   Updated: 2025/05/12 02:39:29 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp" 


class Bureaucrat;

class Intern : public Bureaucrat 
{
    public :
    // C.O.F
        Intern();
        Intern(const Intern &original);
        Intern& operator=(const Intern &original);
        ~Intern();
    // mm fct
        AForm* makeForm(std::string FormName, std::string FormTarget);
    
};

#endif