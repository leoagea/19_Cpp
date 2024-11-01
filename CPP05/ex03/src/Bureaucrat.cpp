/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:00:26 by lagea             #+#    #+#             */
/*   Updated: 2024/10/31 15:34:18 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &ref)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = ref;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &ref)
{
	std::cout << "Copy assignment constructor called." << std::endl;
	if (this != &ref){
		this->_name = ref._name;
		this->_grade = ref._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called." << std::endl;
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

unsigned int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void Bureaucrat::setGrade(unsigned int newgrade)
{
	this->_grade = newgrade;
}

void Bureaucrat::incrementGrade()
{
	std::cout << "Increment grade from " << _name << " by 1." << std::endl;
	if (this->_grade == 1){
		throw (Bureaucrat::GradeTooHighException());
	}
	else
		this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	std::cout << "Decrement grade from " << _name << " by 1." << std::endl;
	if (this->_grade + 1> 150){
		throw (Bureaucrat::GradeTooLowException());
	}
	else
		this->_grade++;
}

void Bureaucrat::signForm(AForm &ref)
{
	if (ref.getIsSigned())
		std::cout << this->_name << " signed " << ref.getName() << std::endl;
	else
		std::cout << this->_name << " couldn't sign " << ref.getName() << " because grade of the bureaucrat is too low. " << this->_name << " has a score of " << this->_grade << "." << std::endl;
}

void Bureaucrat::executeForm(AForm const &ref)
{
	try
	{
		ref.execute(*this);
	}
	catch(std::exception &e)
	{
		std::cout << "Cannot execute Form because " << e.what() << std::endl;
	}
}

///////////////////////////////////////////////////////////////////////////////
//////////////////////////// Overload operator ////////////////////////////////

std::ostream &operator<<(std::ostream &out, const Bureaucrat &ref)
{
	out << "Bureaucrat " << ref.getName() << " has a grade of " << ref.getGrade() << ".";
	return out;
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////// Homemade Exceptions ///////////////////////////////

const char* Bureaucrat::Exception::what() const throw()
{
	return ("Bureaucrat Exception\n");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade cant be under 1!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade cant be over 150!");
}
