/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:55:19 by akajjou           #+#    #+#             */
/*   Updated: 2025/04/17 18:44:53 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private :
        const std::string  name;
        const int          sign_grade;
        const int          execute_grade;
        bool               is_signed;
    public :
    // C.O.F
        AForm();
        AForm(std::string _name, int s_garde, int e_grade);
        AForm(const AForm& original);
        AForm& operator=(const AForm &original);
        ~AForm();
    // mm fct
        void      beSigned(Bureaucrat &original);
        virtual void execute(Bureaucrat const & executor) const = 0;
    // getter
        std::string getName();
        virtual int         getSgrade() const = 0;
        int         getEgrade();
        bool        getBool() const;
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



std::ostream	&operator<<(std::ostream &o, AForm &a);




#endif