/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 01:40:38 by akajjou           #+#    #+#             */
/*   Updated: 2025/05/09 18:00:43 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include "Form.hpp"
# include <iostream>
# include <exception>
# include <streambuf>

class Form;

class Bureaucrat
{
    private :
        const std::string name;
        int               grade;
    public :
    // C.O.F
        Bureaucrat();
        Bureaucrat(int set_grade);
        Bureaucrat(std::string _name);
        Bureaucrat(std::string _name, int set_garde);
        Bureaucrat(const Bureaucrat& original);
        Bureaucrat& operator=(const Bureaucrat &original);
        ~Bureaucrat();
    // mm fct
        void        signForm(Form &form);
    // increment and decrement
        void        BureaucratIncrement();
        void        BureaucratDecrement();
    // Getter
        std::string getName();
        int         getGrade();
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

std::ostream	&operator<<(std::ostream &o, Bureaucrat &a);

# endif