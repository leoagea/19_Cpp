/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:25:15 by lagea             #+#    #+#             */
/*   Updated: 2024/09/15 17:36:48 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack() const
{
    std::cout << this->_name << " attacks with their " 
            << this->_weapon.getType() << std::endl;
}