/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:20:41 by lagea             #+#    #+#             */
/*   Updated: 2024/10/01 16:54:32 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"

Ice::Ice()
{
	// std::cout << "Ice constructor called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(const Ice &ref)
{
	*this = ref;
}

Ice &Ice::operator=(const Ice &ref)
{
	if (this != &ref){
		this->_type = ref.getType();
	}
	return *this;
}

Ice::~Ice()
{
}

AMateria *Ice::clone() const
{
	AMateria *tmp = new Ice(*this);
	return tmp;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
