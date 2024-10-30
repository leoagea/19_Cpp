/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:19:53 by lagea             #+#    #+#             */
/*   Updated: 2024/10/30 18:24:35 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
#define __FORM_HPP__

#include <iostream>
// #include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        Form(const std::string name, const unsigned int signGrade, const unsigned int execGrade);
        Form(const Form &ref);
        Form &operator=(const Form &ref);
        ~Form();

        const std::string getName() const;
        bool getIsSigned() const;
        unsigned int getSignGrade() const;
        unsigned int getExecGrade() const;

        void beSigned(Bureaucrat &ref);

        class Exception : public std::exception
		{
			public :
				const char* what() const throw();
		};

		class GradeTooHighException : public Form::Exception
		{
			public :
				const char* what() const throw();
		};
		
		class GradeTooLowException : public Form::Exception
		{
			public :
				const char* what() const throw();
		};
        
    private:
        const std::string _name;
        bool _isSigned;
        const unsigned int _signGrade;
        const unsigned int _execGrade;
};

std::ostream &operator<<(std::ostream &out, const Form &ref);

#endif
