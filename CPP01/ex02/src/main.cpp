/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 03:24:19 by lagea             #+#    #+#             */
/*   Updated: 2024/09/17 13:20:47 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memory address of the string       : " << &str << std::endl;
    std::cout << "Memory address held by stringPTR   : " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF   : " << &stringREF << std::endl;

    std::cout << std::endl;
    
    std::cout << "Value of the string        : " << str << std::endl;
    std::cout << "Value pointed by stringPTR : " << *stringPTR << std::endl;
    std::cout << "Value pointed by stringREF : " << stringREF << std::endl;
}
