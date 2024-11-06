/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:53:57 by lagea             #+#    #+#             */
/*   Updated: 2024/11/06 19:21:25 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RPN.hpp"

void RPN(std::string input)
{
    int tmp;
	std::stack<int> rpn;
    
    for (int i=0; input[i]; i++)
    {
        if (i & 1) //operand AND on i and 1
        {
            if (input[i] != ' ')
                throw BadInputArgumentException();
        }
        else if (isdigit(input[i]))
            rpn.push(input[i] - '0');
        else
        {
            switch (input[i])
            {
                case '+':
                    tmp = rpn.top();
                    rpn.pop();
                    rpn.top() += tmp;
                    break;
                
                case '-':
                    tmp = rpn.top();
                    rpn.pop();
                    rpn.top() -= tmp;
                    break;
                case '*':
                    tmp = rpn.top();
                    rpn.pop();
                    rpn.top() *= tmp;
                    break;
                case '/':
                    tmp = rpn.top();
                    if (!tmp)
                    {
                        throw DividedByZeroException();
                    }
                    rpn.pop();
                    rpn.top() /= tmp;
                    break;
                    
                default:
                    throw BadOperatorArgumentException();
            }
        }
    }
    if (rpn.size() != 1)
        throw BadOperationsException();
        
    std::cout << rpn.top() << std::endl;
}
