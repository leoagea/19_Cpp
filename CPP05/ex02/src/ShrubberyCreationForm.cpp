/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:23:25 by lagea             #+#    #+#             */
/*   Updated: 2024/10/31 17:01:19 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137, target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ref) : AForm("ShrubberyCreationForm", 145, 137, ref.getTarget())
{
    *this = ref;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref)
{
    if (this == &ref)
        return *this;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() < this->getExecGrade() && this->getIsSigned())
    {
        std::ofstream file(std::strcat((char *)this->getTarget().c_str(), "_shrubbery"));
        if (!file.is_open()){
            std::cout << "Error: creating file " << this->getTarget() + "_shrubbery" << "." << std::endl;
            exit(EXIT_FAILURE);
        }
        file << TREE;
        file.close();
    }
    else
        throw (AForm::GradeTooLowException());
}
