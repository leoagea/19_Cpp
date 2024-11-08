/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:00:13 by lagea             #+#    #+#             */
/*   Updated: 2024/11/08 17:31:52 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2){
        std::cout << "./btc : usage <string>" << std::endl;
    }
    BitcoinExchange test(av[1]);
}
