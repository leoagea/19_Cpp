/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 03:24:19 by lagea             #+#    #+#             */
/*   Updated: 2024/09/16 18:14:25 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"
#include <iostream>
#include <string>

int dispatchError(const std::string input)
{
    if (input == "DEBUG")
        return 0;
    else if (input == "INFO")
        return 1;
    else if (input == "WARNING")
        return 2;
    else if (input == "ERROR")
        return 3;
    return -1;
}

int main(int ac, char **av)
{
    Harl harl;
    int dispatch;
    
    if (ac != 2)
        exit(1);
    dispatch = dispatchError(av[1]);
    switch (dispatch)
    {
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "Unknown level: " << av[1] << std::endl;
            break;
    }
}
