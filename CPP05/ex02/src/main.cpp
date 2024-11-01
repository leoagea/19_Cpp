
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
	std::cout << "====================================" << "Everything Ok" << std::endl;

	Bureaucrat bob("Bob",1);
	ShrubberyCreationForm test("test");
	std::cout << test;
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

	Bureaucrat alice("alice",1);
	RobotomyRequestForm test1("Bob");
	std::cout << test1;
	try {
		test1.beSigned(alice);
		for(int i=0; i<3; i++)
			test1.execute(alice);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	Bureaucrat mallory("Mallory",1);
	PresidentialPardonForm test2("Bob");
	std::cout << test2;
	try {
		test2.beSigned(mallory);
		test2.execute(mallory);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "====================================" << "Test exceptions" << std::endl;
	
	Bureaucrat james("james",146);
	ShrubberyCreationForm test3("test");
	std::cout << test3;
	try {
		test3.beSigned(james);
		// test.execute(james);
		james.executeForm(test3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	Bureaucrat mary("mary",50);
	RobotomyRequestForm test4("Bob");
	std::cout << test4;
	try {
		test4.beSigned(mary);
		for(int i=0; i<3; i++)
			test4.execute(mary);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	Bureaucrat michael("michael",10);
	PresidentialPardonForm test5("Bob");
	std::cout << test5;
	try {
		test5.beSigned(michael);
		michael.executeForm(test5);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	return (0);
}
