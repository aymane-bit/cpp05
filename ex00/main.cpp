/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:43:08 by akajjou           #+#    #+#             */
/*   Updated: 2025/03/01 16:52:43 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int main()
{
    Bureaucrat *youssef = new Bureaucrat(90);

    std::cout << youssef;
    youssef->BureaucratIncrement();
    std::cout << youssef;
    youssef->BureaucratDecrement();
    std::cout << youssef;
    delete youssef;
    return 0;
}