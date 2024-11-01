/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:24:47 by lagea             #+#    #+#             */
/*   Updated: 2024/11/01 12:57:38 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"
#include "../inc/Bureaucrat.hpp"

Form::Form(const std::string name, const unsigned int signGrade, const unsigned int execGrade) : _name(name), _isSigned(0), _signGrade(signGrade), _execGrade(execGrade)
{
    std::cout << "Form " << this->_name << " created." << std::endl;
    if (this->_signGrade < 1 || this->_execGrade < 1)
        throw (Form::GradeTooHighException());
    else if (this->_signGrade > 150 || this->_execGrade > 150)
        throw (Form::GradeTooLowException());
}

Form::Form(const Form &ref) : _name(ref._name + "_copy"), _isSigned(ref._isSigned), _signGrade(ref._signGrade), _execGrade(ref._execGrade)
{
    std::cout << "Form " << this->_name << " created." << std::endl;
    if (this->_signGrade < 1 || this->_execGrade < 1)
        throw (Form::GradeTooHighException());
    else if (this->_signGrade > 150 || this->_execGrade > 150)
        throw (Form::GradeTooLowException());
}

Form &Form::operator=(const Form &ref)
{
    if (this != &ref)
    {
        this->_isSigned = ref._isSigned;
    }
    return *this;
}

Form::~Form()
{
    std::cout << "Form " << this->_name << " deleted." << std::endl;
}

const std::string Form::getName() const
{
    return this->_name;
}

bool Form::getIsSigned() const
{
    return this->_isSigned;
}

unsigned int Form::getSignGrade() const
{
    return this->_signGrade;
}

unsigned int Form::getExecGrade() const
{
    return this->_execGrade;
}

void Form::beSigned(Bureaucrat &ref)
{
    if (ref.getGrade() <= this->_signGrade){
        if (this->_isSigned == 0){
            this->_isSigned = 1;
            ref.signForm(*this);
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
            throw (Form::GradeTooLowException());
        }
        ref.signForm(*this);   
        throw (Form::GradeTooLowException());
    }
}

std::ostream &operator<<(std::ostream &out, const Form &ref)
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

const char* Form::Exception::what() const throw()
{
	return ("Form Exception\n");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too High!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}
