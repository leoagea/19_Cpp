/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:44:37 by lagea             #+#    #+#             */
/*   Updated: 2024/11/01 12:44:48 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"

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
