/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:20:07 by lagea             #+#    #+#             */
/*   Updated: 2024/10/01 16:20:28 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
}

Cure::Cure(const Cure &ref)
{
	*this = ref;
}

Cure &Cure::operator=(const Cure &ref)
{
	if (this != &ref){
		this->_type = ref.getType();
	}
	return *this;
}

Cure::~Cure()
{
}

AMateria *Cure::clone() const
{
	AMateria *tmp = new Cure(*this);
	return tmp;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
