/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:22:29 by lagea             #+#    #+#             */
/*   Updated: 2024/10/31 17:02:05 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_HPP__
#define __ROBOTOMYREQUESTFORM_HPP__

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>
#include <cstring>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

class RobotomyRequestForm : public AForm
{
    public:
    
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &ref);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &ref);
        ~RobotomyRequestForm();
        
        virtual void execute(Bureaucrat const &executor) const;
        
    private:
        
};

#endif
