/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:41:25 by akajjou           #+#    #+#             */
/*   Updated: 2025/05/11 17:47:37 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"


// C.O.F
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm_Def", 145, 137)
{
    _target = "default";
    std::cout << "ShrubberyCreationForm default constructor is called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor is called for " << _target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : AForm("ShrubberyCreationForm", 145, 137)
{
    _target = name;    
    std::cout << "ShrubberyCreationForm constructor is called for the target " << _target << std::endl;    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &original)
{
    this->_target = original._target; 
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &original)
{
    if (this != &original)
        this->_target = original._target;
    return *this;
}

//mm fct

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const 
{
    if (!getBool())
        throw AForm::FormNotSigned();
    if (executor.getGrade() > getEgrade())
        throw Bureaucrat::GradeTooLowException();
    std::string     filename = _target + "_shrubbery";
    std::ofstream   outFile(filename.c_str());
    
    outFile << "        *\n";
    outFile << "       ***\n";
    outFile << "      *****\n";
    outFile << "     *******\n";
    outFile << "    *********\n";
    outFile << "   ***********\n";
    outFile << "  *************\n";
    outFile << " ***************\n";
    outFile << "*****************\n";
    outFile << "       |||\n";
    outFile << "       |||\n";
    outFile << "     __|||__\n";
    outFile << "    |       |\n";
    outFile << "    |_______|\n";

    outFile.close();
}