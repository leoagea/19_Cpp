/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:13:34 by lagea             #+#    #+#             */
/*   Updated: 2024/09/23 16:20:04 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
    std::cout << "Default DiamondTrap constructor called" << std::endl;
    setName("JackBlack");
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    this->_name = name;
    std::cout << "DiamondTrap Constructor called" << std::endl;
    this->whoAmI();
}

DiamondTrap::DiamondTrap(const DiamondTrap &c)
{
    std::cout << "Copy DiamondTrap constructor called" << std::endl;
    *this = c;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &c)
{
    std::cout << "Copy DiamondTrap assignment operator called" << std::endl;
    if (this != &c){
        setName(c._name);
        setHitPoints(c._hitPoints);
        setEnergyPoints(c._energyPoints);
        setAttackDamage(c._attackDamage);  
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is : " << this->_name << std::endl;
    std::cout << "ClapTrap name is : " << ClapTrap::_name << std::endl;
}
