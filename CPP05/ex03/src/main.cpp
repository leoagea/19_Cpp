
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:00:13 by lagea             #+#    #+#             */
/*   Updated: 2024/10/02 23:47:37 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/Intern.hpp"

int main()
{
	std::cout << std::endl;

	Bureaucrat alice("Alice",1);
	RobotomyRequestForm test1("Bob");
	try {
		test1.beSigned(alice);
		test1.execute(alice);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	Bureaucrat mallory("Mallory",1);
	PresidentialPardonForm test2("Bob");
	try {
		test2.beSigned(mallory);
		test2.execute(mallory);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << std::endl;

		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = new Bureaucrat("Emperor", 1);
		Intern *z = new Intern();
		AForm *b = z->makeForm("RobotomyRequestForm", "Bender");
		AForm *c = z->makeForm("ShrubberyCreationForm", "Cristmas");
		std::cout << std::endl;

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		b->beSigned(*a);
		a->signForm(*c);
		std::cout << std::endl;

		a->executeForm(*c);
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete b;
		delete c;
		delete z;
		std::cout << std::endl;

	{
		Intern *someRandomIntern = new Intern();
		AForm* rrf = someRandomIntern->makeForm("RobotoyRequestForm", "Bender");
		if (rrf)
			rrf->beSigned(*a);
	}
	delete a;
	return (0);
}
