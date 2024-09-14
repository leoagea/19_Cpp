/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 01:18:04 by lagea             #+#    #+#             */
/*   Updated: 2024/09/15 01:24:22 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main()
{
	Zombie nicolas = Zombie("Gabriel");
	Zombie *lucas = newZombie("Edouardo");
	randomChump("Vicente");

	nicolas.announce();
	lucas->announce();

	delete lucas;

	return 0;
}