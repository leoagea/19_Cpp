/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:11:10 by lagea             #+#    #+#             */
/*   Updated: 2024/09/19 18:26:03 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

int main()
{
    {
        ScavTrap a;
        ScavTrap b("Zero");
        std::cout 
            << "Name: " << b.getName() << std::endl
            << "HP: " << b.getHitPoints() << std::endl
            << "EP: " << b.getEnergyPoints() << std::endl
            << "AD: " << b.getAttackDamage() << std::endl;
            
        ScavTrap c(b);
        ScavTrap d = c;

        a.attack("Zero");
        b.beRepaired(10);
        a.takeDamage(15);
        a.attack("Jack Black");
        c.guardGate();
    }
    return 0;
}
