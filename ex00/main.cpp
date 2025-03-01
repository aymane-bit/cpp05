/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:43:08 by akajjou           #+#    #+#             */
/*   Updated: 2025/03/01 18:19:54 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int main()
{

    try
    {
    Bureaucrat *youssef = new Bureaucrat(1);
    std::cout << youssef;
    youssef->BureaucratIncrement();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
        // delete youssef;
    return 0;
}