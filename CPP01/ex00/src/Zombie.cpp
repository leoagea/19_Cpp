/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 00:54:15 by lagea             #+#    #+#             */
/*   Updated: 2024/09/15 01:22:15 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie(const std::string name) : _name(name)
{
    std::cout << "Zombie " << this->_name << " created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->_name << " deleted" << std::endl;
}

void Zombie::announce()
{
    std::cout
        << this->_name
        << ": BraiiiiiiinnnzzzZ..."
        << std::endl;
}