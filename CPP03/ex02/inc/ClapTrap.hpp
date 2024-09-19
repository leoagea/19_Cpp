/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:11:22 by lagea             #+#    #+#             */
/*   Updated: 2024/09/17 23:01:45 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP__HPP__
#define __CLAPTRAP__HPP__

#include <string>
#include <iostream>

class ClapTrap
{
    public:
    
        ClapTrap();   
        ClapTrap(std::string name);   
        ClapTrap(const ClapTrap &c);   
        ClapTrap &operator=(const ClapTrap &t);
        ~ClapTrap();

        void setName(std::string name);
        void setHitPoints(unsigned int amount);
        void setEnergyPoints(unsigned int amount);
        void setAttackDamage(unsigned int amount);
        
        std::string getName(void) const;
        unsigned int getHitPoints(void) const;
        unsigned int getEnergyPoints(void) const;
        unsigned int getAttackDamage(void) const;
        
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
    private:
        
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
};

#endif
