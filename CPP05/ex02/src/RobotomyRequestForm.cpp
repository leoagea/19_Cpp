/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:23:11 by lagea             #+#    #+#             */
/*   Updated: 2024/10/31 16:59:25 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 145, 137, target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref) : AForm("RobotomyRequestForm", 145, 137, ref.getTarget())
{
    *this = ref;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &ref)
{
    if (this == &ref)
        return *this;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() < this->getExecGrade() && this->getIsSigned())
    {
        for(int i=0; i<3; i++)
            std::cout << "Making some drilling noises ..." << std::endl;
        srand (time(NULL));
        int random = rand() % 2;
        if (random == 0)
            std::cout << this->getTarget() << " has been succesfully robotimized." << std::endl;
        else
            std::cout << "Robotomy on " << this->getTarget() << " failed." << std::endl;
    }
    else
        throw (AForm::GradeTooLowException());
}