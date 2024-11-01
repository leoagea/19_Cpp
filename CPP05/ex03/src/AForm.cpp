/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:34:48 by lagea             #+#    #+#             */
/*   Updated: 2024/11/01 13:31:53 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.hpp"
#include "../inc/Bureaucrat.hpp"

AForm::AForm(const std::string name, const unsigned int signGrade, const unsigned int execGrade, std::string target) : _name(name), _isSigned(0), _signGrade(signGrade), _execGrade(execGrade), _target(target)
{
    std::cout << "Form " << this->_name << " created." << std::endl;
    if (this->_signGrade < 1 || this->_execGrade < 1)
        throw (AForm::GradeTooHighException());
    else if (this->_signGrade > 150 || this->_execGrade > 150)
        throw (AForm::GradeTooLowException());
}

AForm::AForm(const AForm &ref) : _name(ref._name + "_copy"), _isSigned(ref._isSigned), _signGrade(ref._signGrade), _execGrade(ref._execGrade)
{
    std::cout << "Form " << this->_name << " created." << std::endl;
    if (this->_signGrade < 1 || this->_execGrade < 1)
        throw (AForm::GradeTooHighException());
    else if (this->_signGrade > 150 || this->_execGrade > 150)
        throw (AForm::GradeTooLowException());
}

AForm &AForm::operator=(const AForm &ref)
{
    if (this != &ref)
    {
        this->_isSigned = ref._isSigned;
    }
    return *this;
}

AForm::~AForm()
{
    std::cout << "AForm " << this->_name << " deleted." << std::endl;
}

std::string AForm::getTarget() const
{
    return this->_target;    
}

const std::string AForm::getName() const
{
    return this->_name;
}

bool AForm::getIsSigned() const
{
    return this->_isSigned;
}

unsigned int AForm::getSignGrade() const
{
    return this->_signGrade;
}

unsigned int AForm::getExecGrade() const
{
    return this->_execGrade;
}

void AForm::beSigned(Bureaucrat &ref)
{
    if (ref.getGrade() <= this->_signGrade){
        if (this->_isSigned == 0){
            this->_isSigned = 1;
        }
        else{
            std::cout << this->_name << " is already signed." << std::endl;
            return ;   
        }
    }
    else{
        if (this->_isSigned)
        {
            std::cout << this->_name << " is already signed." << std::endl;
            throw (AForm::GradeTooLowException());
        }
        ref.signForm(*this);   
        throw (AForm::GradeTooLowException());
    }
    ref.signForm(*this);
}


std::ostream &operator<<(std::ostream &out, const AForm &ref)
{
    std::cout << 
        "Form :" << std::endl
        << "    name : " << ref.getName() << std::endl
        << "    signed : " << ref.getIsSigned() << std::endl
        << "    signed grade : " << ref.getSignGrade() << std::endl
        << "    exec grade : " << ref.getExecGrade() << std::endl;
    return out;
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////// Homemade Exceptions ///////////////////////////////

const char* AForm::Exception::what() const throw()
{
	return ("Form Exception\n");
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too High!");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}
