
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
#include <stdlib.h>     /* srand, rand */
#include <time.h>

int main()
{
	Bureaucrat bob("Bob",1);
	ShrubberyCreationForm test("test");
	try {
		test.beSigned(bob);
		// test.execute(bob);
		bob.executeForm(test);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
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

	return (0);
}
