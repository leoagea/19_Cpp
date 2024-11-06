/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:04:30 by lagea             #+#    #+#             */
/*   Updated: 2024/11/06 19:18:31 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RPN_HPP__
#define __RPN_HPP__

#include <stack>
#include <iostream>

void RPN(std::string);

class NotEnoughInputArgumentsException : public std::exception
{
    public : 
        virtual const char *what() const throw()
        {
            return "NotEnoughInputArgumentsException: expected <string>";
        }
};

class BadInputArgumentException : public std::exception
{
    public : 
        virtual const char *what() const throw()
        {
            return "BadInputArgumentException: invalid input: expected something like \"7 7 * 7 -\"";
        }
};

class BadOperatorArgumentException : public std::exception
{
    public : 
        virtual const char *what() const throw()
        {
            return "BadOperatorArgumentException: invalid input: handle only + - * /";
        }
};

class DividedByZeroException : public std::exception
{
    public : 
        virtual const char *what() const throw()
        {
            return "DividedByZeroException: impossible";
        }
};

class BadOperationsException : public std::exception
{
    public : 
        virtual const char *what() const throw()
        {
            return "BadOperationsException: stack size not equal to 1";
        }
};

#endif
