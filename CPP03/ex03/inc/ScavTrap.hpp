/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:11:22 by lagea             #+#    #+#             */
/*   Updated: 2024/09/23 13:33:23 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP__HPP__
#define __SCAVTRAP__HPP__

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
    
        ScavTrap();   
        ScavTrap(std::string name);   
        ScavTrap(const ScavTrap &c);   
        ScavTrap &operator=(const ScavTrap &t);
        ~ScavTrap();
        
        void guardGate(void);
};

#endif
