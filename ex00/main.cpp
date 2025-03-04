/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:43:08 by akajjou           #+#    #+#             */
/*   Updated: 2025/03/04 14:53:02 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int main()
{
	{
		std::cout << "                  Testing with high grade ( < 1) \n";
		Bureaucrat aymane("Aymane", 1);
		try
		{
			aymane.BureaucratIncrement();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "                  Testing with low grade ( > 150) \n";
		Bureaucrat aymane("Aymane", 150);
		try
		{
			aymane.BureaucratDecrement();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "                  Testing constructing using invalid grade\n";
		try
		{
			Bureaucrat aymane("aymane" , 195);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "                  Testing the insertion («) operator\n";
		Bureaucrat aymane("Aymane", 50);
		std::cout << aymane;
	}
}