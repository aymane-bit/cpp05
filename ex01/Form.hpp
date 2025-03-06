/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:55:19 by akajjou           #+#    #+#             */
/*   Updated: 2025/03/06 17:50:05 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private :
        const std::string  name;
        const int          sign_grade;
        const int          execute_grade;
        bool               is_signed;
    public :
    // C.O.F
        Form();
        Form(std::string _name, int s_garde, int e_grade);
        Form(const Form& original);
        Form& operator=(const Form &original);
        ~Form();
    // mm fct
        void        beSigned(Bureaucrat &original);
    // getter
        std::string getName();
        int         getSgrade();
        int         getEgrade();
        bool        getBool();
    // exeption class
    class GradeTooHighException : public std::exception
    {
        public :
            virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public :
            virtual const char *what() const throw();
    };
    
};



std::ostream	&operator<<(std::ostream &o, Form &a);




#endif