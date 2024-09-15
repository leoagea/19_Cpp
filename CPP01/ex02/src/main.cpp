/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 03:24:19 by lagea             #+#    #+#             */
/*   Updated: 2024/09/15 17:06:50 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << "Memory address of the string : " << &str << std::endl;
    std::cout << "Memory address held by ptr   : " << ptr << std::endl;
    std::cout << "Memory address held by ref   : " << &ref << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "Value of the string  : " << str << std::endl;
    std::cout << "Value pointed by ptr : " << *ptr << std::endl;
    std::cout << "Value pointed by ref : " << ref << std::endl;
}