/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 01:40:38 by akajjou           #+#    #+#             */
/*   Updated: 2025/02/24 17:46:09 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>


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
    // Getter
        std::string getName();
        int         getGrade();
};


# endif