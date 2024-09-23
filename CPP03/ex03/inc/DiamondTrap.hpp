/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:11:22 by lagea             #+#    #+#             */
/*   Updated: 2024/09/23 13:38:42 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP__HPP__
#define __DIAMONDTRAP__HPP__

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    public:
    
        using FragTrap::_hitPoints;
        using ScavTrap::_energyPoints;
        using FragTrap::_attackDamage;
        using ScavTrap::attack;

        DiamondTrap();   
        DiamondTrap(std::string name);   
        DiamondTrap(const DiamondTrap &c);   
        DiamondTrap &operator=(const DiamondTrap &t);
        ~DiamondTrap();
        
        void whoAmI(void);

    private:

        std::string _name;
};

#endif
