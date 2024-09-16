/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:55:56 by lagea             #+#    #+#             */
/*   Updated: 2024/09/16 18:14:01 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Harl::Harl() 
{
    _fptr[0] = &Harl::_debug;
    _fptr[1] = &Harl::_info;
    _fptr[2] = &Harl::_warning;
    _fptr[3] = &Harl::_error;
}

Harl::~Harl()
{
}

void Harl::_debug()
{
    std::cout << "\033[0;17m[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!\033[0m" << std::endl;
    std::cout << std::endl;
}

void Harl::_info()
{
    std::cout << "\033[0;35m[ INFO ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\n"
            << "I’ve been coming for years whereas you started working here since last month.\033[0m" << std::endl;
    std::cout << std::endl;
}

void Harl::_warning()
{
    std::cout << "\033[0;33m[ WARNING ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money.\n"
            << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\033[0m" << std::endl;
    std::cout << std::endl;
}

void Harl::_error()
{
    std::cout << "\033[0;31m[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.\033[0m" << std::endl;
    std::cout << std::endl;
}

void Harl::complain(std::string level) 
{
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    for (int i = 0; i < 4; ++i) 
    {
        if (levels[i] == level) 
        {
            (this->*_fptr[i])();
            return ;
        }
    }
    std::cout << "Unknown level: " << level << std::endl;
}
