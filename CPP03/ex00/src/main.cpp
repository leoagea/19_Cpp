/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:11:10 by lagea             #+#    #+#             */
/*   Updated: 2024/09/17 19:11:25 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main()
{
    {
        ClapTrap a;
        ClapTrap b("Zero");
        ClapTrap c(b);
        ClapTrap d = c;

        a.attack("Zero");
        b.beRepaired(10);
        a.takeDamage(15);
        a.attack("Jack Black");
    }
    {
        
    }
    return 0;
}
