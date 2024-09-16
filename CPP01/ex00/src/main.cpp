/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 01:18:04 by lagea             #+#    #+#             */
/*   Updated: 2024/09/16 18:20:45 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main()
{
	Zombie Gabriel = Zombie("Gabriel");
	Zombie *Eduardo = newZombie("Edouardo");
	randomChump("Vicente");

	Gabriel.announce();
	Eduardo->announce();

	delete Eduardo;

	return 0;
}
