/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:38:03 by lagea             #+#    #+#             */
/*   Updated: 2024/10/01 16:20:25 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
#define __CURE_HPP__

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &ref);
		Cure &operator=(const Cure &ref);
		~Cure();
		
        AMateria* clone() const;
		void use(ICharacter& target);

};

#endif
