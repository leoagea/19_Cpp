/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:43:54 by lagea             #+#    #+#             */
/*   Updated: 2024/11/01 12:44:24 by lagea            ###   ########.fr       */
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
};


#endif
