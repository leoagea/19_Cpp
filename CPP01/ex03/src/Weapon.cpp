/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:13:34 by lagea             #+#    #+#             */
/*   Updated: 2024/09/15 17:49:30 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(const std::string type) : _type(type)
{
}

Weapon::~Weapon()
{
}

void Weapon::setType(const std::string type)
{
    this->_type = type; 
}

const std::string Weapon::getType()
{
    std::string &ref = this->_type;
    return ref;
}