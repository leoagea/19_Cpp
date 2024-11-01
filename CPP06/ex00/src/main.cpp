/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:00:13 by lagea             #+#    #+#             */
/*   Updated: 2024/11/01 16:17:52 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2){
		std::cout << "Usage:" << "<string literal" << std::endl;
		return 1;
	}
	
	ScalarConverter::convert(av[1]);
	
	return 0;
}
