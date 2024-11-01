/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:00:13 by lagea             #+#    #+#             */
/*   Updated: 2024/11/01 18:46:44 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

/* Static cast: - convertion between numeric types (int, double, float, ...)
				- convert pointer object class to a derivative up or down object of the inheritance tree (base -> derived class or derived -> base class)
				- remove the const ness of variable (but const_cast is preferred)
*/
int main(int ac, char **av)
{
	if (ac != 2){
		std::cout << "Usage:" << "<string literal" << std::endl;
		return 1;
	}
	
	ScalarConverter::convert(av[1]);
	
	return 0;
}
