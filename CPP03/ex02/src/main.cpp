/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:11:10 by lagea             #+#    #+#             */
/*   Updated: 2024/09/25 17:34:31 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

int main()
{
    {
        FragTrap a;
        FragTrap b("Zero");
        std::cout 
            << "Name: " << b.getName() << std::endl
            << "HP: " << b.getHitPoints() << std::endl
            << "EP: " << b.getEnergyPoints() << std::endl
            << "AD: " << b.getAttackDamage() << std::endl;
            
        FragTrap c(b);
        FragTrap d = c;

        a.attack("Zero");
        b.beRepaired(10);
        a.takeDamage(15);
        a.attack("Jack Black");
        c.highFivesGuys();
    }
    return 0;
}
