/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:21:24 by lagea             #+#    #+#             */
/*   Updated: 2024/10/31 17:02:54 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AFORM_HPP__
#define __AFORM_HPP__

#include <iostream>
#include <cstdlib>

class Bureaucrat;

class AForm
{
    public:
        AForm(const std::string name, const unsigned int signGrade, const unsigned int execGrade, std::string target);
        AForm(const AForm &ref);
        AForm &operator=(const AForm &ref);
        virtual ~AForm() = 0;

        std::string getTarget() const;
        const std::string getName() const;
        bool getIsSigned() const;
        unsigned int getSignGrade() const;
        unsigned int getExecGrade() const;

        void beSigned(Bureaucrat &ref);
        virtual void execute(Bureaucrat const &executor) const = 0;
        
        class Exception : public std::exception
		{
			public :
				const char* what() const throw();
		};

		class GradeTooHighException : public AForm::Exception
		{
			public :
				const char* what() const throw();
		};
		
		class GradeTooLowException : public AForm::Exception
		{
			public :
				const char* what() const throw();
		};
    
    protected : 
        AForm();
        
    private:
        const std::string _name;
        bool _isSigned;
        const unsigned int _signGrade;
        const unsigned int _execGrade;
        std::string _target;
};

std::ostream &operator<<(std::ostream &out, const AForm &ref);

#endif
