/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:00:13 by lagea             #+#    #+#             */
/*   Updated: 2024/11/01 13:00:10 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int main()
{
    // Bureaucrat tests (existing ones)
    std::cout << std::endl;
    std::cout << "CONSTRUCTING WITH GRADE -49:" << std::endl;
    std::cout << "----------------------------" << std::endl;
    try
    {
        Bureaucrat bill("Bill", -49);
    }
    catch (Bureaucrat::Exception &e)
    {
        std::cout << e.what();
    }
    std::cout << std::endl << std::endl;
    //-------------------------------------------------------

    std::cout << std::endl;
    std::cout << "CONSTRUCTING WITH GRADE 256:" << std::endl;
    std::cout << "----------------------------" << std::endl;
    try
    {
        Bureaucrat bill("Bill", 256);
    }
    catch (Bureaucrat::Exception &e)
    {
        std::cout << e.what();
    }
    std::cout << std::endl << std::endl;
    //-------------------------------------------------------

    std::cout << std::endl;
    std::cout << "IN/DECREMENT + << overload:" << std::endl;
    std::cout << "----------------------------" << std::endl;
    Bureaucrat bob("Bob", 1);
    try
    {
        bob.decrementGrade();
    }
    catch (Bureaucrat::Exception &e)
    {
        std::cout << e.what();
    }
    std::cout << bob << std::endl;
    try
    {
        bob.incrementGrade();
    }
    catch (Bureaucrat::Exception &e)
    {
        std::cout << e.what();
    }
    std::cout << bob;
    std::cout << std::endl << std::endl;
    //-------------------------------------------------------

    std::cout << std::endl;
    std::cout << "INCREMENT GRADE 1:" << std::endl;
    std::cout << "----------------------------" << std::endl;
    try
    {
        bob.incrementGrade();
    }
    catch (Bureaucrat::Exception &e)
    {
        std::cout << e.what();
    }
    std::cout << std::endl << std::endl;
    //-------------------------------------------------------

    std::cout << std::endl;
    std::cout << "DECREMENT GRADE 150:" << std::endl;
    std::cout << "----------------------------" << std::endl;
    bob.setGrade(150);
    try
    {
        bob.decrementGrade();
    }
    catch (Bureaucrat::Exception &e)
    {
        std::cout << e.what();
    }
    std::cout << std::endl << std::endl;

    //-------------------------------------------------------
    // Form tests (new ones)
    std::cout << std::endl;
    std::cout << "FORM CREATION AND SIGNING:" << std::endl;
    std::cout << "----------------------------" << std::endl;
    Form taxForm("TaxForm", 50, 25);
    try
    {
    	Form fakeForm("fakeForm", 160, 25);
        std::cout << taxForm << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
	std::cout << std::endl;
	try
    {
    	Form dutyForm("dutyForm", 50, 0);
        std::cout << dutyForm << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
	std::cout << std::endl;
	try
    {
        Bureaucrat charlie("Charlie", 40);
        taxForm.beSigned(charlie);
        std::cout << taxForm << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
	std::cout << std::endl;
	try
    {
        Bureaucrat alice("Alice", 60);
        taxForm.beSigned(alice);
        std::cout << taxForm << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

	try
    {
        Bureaucrat nicolas("Nicolas", 60);
    	Form taxForm2("TaxForm2", 50, 25);
        taxForm2.beSigned(nicolas);
        std::cout << taxForm << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    //-------------------------------------------------------
    std::cout << std::endl;
    std::cout << "DESTRUCTORS:" << std::endl;
    std::cout << "----------------------------" << std::endl;
    return (0);
}

