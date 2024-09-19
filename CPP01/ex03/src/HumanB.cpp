/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:25:15 by lagea             #+#    #+#             */
/*   Updated: 2024/09/19 15:26:30 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(const std::string name) : _name(name), _weapon(nullptr)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack() const
{
    if (_weapon)
    {
        std::cout << this->_name << " attacks with their " 
            << this->_weapon->getType() << std::endl;
    }
    else
        std::cout << this->_name << " attacks" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}
