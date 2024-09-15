/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 03:24:19 by lagea             #+#    #+#             */
/*   Updated: 2024/09/15 23:16:32 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Replace.hpp"
#include <iostream>

int main(int ac, char **av)
{
    if (ac != 4)
        std::cerr << "Error: too many arguments, expected 4" << std::endl;
    else
    {
        Replace replace(av[1], av[2], av[3]);

        replace.read();
        replace.replace();
        replace.writeToFile();
    }
}