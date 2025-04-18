/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:43:08 by akajjou           #+#    #+#             */
/*   Updated: 2025/04/17 00:34:15 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"
# include "Bureaucrat.hpp"

int main()
{
	{
		std::cout << "\n---------------------------> Testing the Form exception : <---------------------------\n\n";
		try
		{
			Bureaucrat allal("allal" , 100);
			Form aymane("work", 100, 100);
			aymane.beSigned(allal);
			allal.signForm(aymane);
			std::cout << aymane;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	return (0);
}
