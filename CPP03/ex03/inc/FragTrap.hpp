/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:11:22 by lagea             #+#    #+#             */
/*   Updated: 2024/09/23 13:38:15 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP__HPP__
#define __FRAGTRAP__HPP__

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    
    public:
    
        FragTrap();   
        FragTrap(std::string name);   
        FragTrap(const FragTrap &c);   
        FragTrap &operator=(const FragTrap &t);
        ~FragTrap();
        
        void highFivesGuys(void);
};

#endif