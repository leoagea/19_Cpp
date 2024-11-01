/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:43:54 by lagea             #+#    #+#             */
/*   Updated: 2024/10/31 23:48:46 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_HPP__
#define __INTERN_HPP__

#include <iostream>
#include "../inc/AForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &ref);
		Intern &operator=(const Intern &ref);
		~Intern();
		
		AForm *makeForm(std::string form, std::string target);
		
	private:
		// static AForm* makePresidentialForm(const std::string target);
		// static AForm* makeRobotomyForm(const std::string target);
		// static AForm* makeShrubberyForm(const std::string target);
};

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &ref)
{
	*this = ref;
}

Intern &Intern::operator=(const Intern &ref)
{
	if(this == &ref)
		return *this;
	return *this;
}

static AForm* makePresidentialForm(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

static AForm* makeRobotomyForm(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm* makeShrubberyForm(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeForm(const std::string form, const std::string target)
{
	AForm *(*all_form[])(const std::string target_form) = {&makePresidentialForm, &makeRobotomyForm, &makeShrubberyForm};
	std::string name_form[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	
	for(int i=0; i < 3; i++){
		if (form == name_form[i])
			return (all_form[i])(target);
	}
	std::cout << "Error: cannot create form called " << form << "." << std::endl;
	return NULL;
}


#endif
