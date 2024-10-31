/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:00:48 by lagea             #+#    #+#             */
/*   Updated: 2024/10/31 15:01:30 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <iostream>

class AForm;

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat &ref);
		Bureaucrat &operator=(const Bureaucrat &ref);
		~Bureaucrat();
	
		std::string  getName() const;
		unsigned int getGrade() const;
		void 		 setGrade(unsigned int newgrade);
		
		void incrementGrade();
		void decrementGrade();
		void signForm(AForm &ref);
		void executeForm(AForm const &ref);
		
		class Exception : public std::exception
		{
			public :
				const char* what() const throw();
		};

		class GradeTooHighException : public Bureaucrat::Exception
		{
			public :
				const char* what() const throw();
		};
		
		class GradeTooLowException : public Bureaucrat::Exception
		{
			public :
				const char* what() const throw();
		};
		
	private:
		std::string _name;
		unsigned int _grade; //1 highest, 150 lowest
		
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &ref);

#endif
