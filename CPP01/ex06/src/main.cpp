/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 03:24:19 by lagea             #+#    #+#             */
/*   Updated: 2024/09/19 15:39:10 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"
#include <iostream>
#include <string>

int dispatchError(const std::string input)
{
    std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++){
        if (arr[i] == input)
            return i;
    }
    return -1;
}

int main(int ac, char **av)
{
    Harl harl;
    int dispatch;
    
    if (ac != 2)
    {
        std::cerr << "Error: too many argument: expected 2" << std::endl;
        return 0;
    }
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
            std::cerr << "Error: Unknown level: " << av[1] << std::endl;
            break;
    }
    return 0;
}
