/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:29:43 by lagea             #+#    #+#             */
/*   Updated: 2024/10/01 16:20:35 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
#define __ICE_HPP__

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice &ref);
		Ice &operator=(const Ice &ref);
		~Ice();
		
        AMateria* clone() const;
		void use(ICharacter& target);

};

#endif
