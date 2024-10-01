/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:48:25 by lagea             #+#    #+#             */
/*   Updated: 2024/10/01 16:32:39 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__

#include "../inc/AMateria.hpp"
#include <iostream>

#define MAX_SLOT 4

class MateriaSource : public IMateriaSource
{
		
	public:
		MateriaSource();
		void learnMateria(AMateria* ref);
		AMateria* createMateria(std::string const & type);
		~MateriaSource();
		
	private:
		AMateria *_materia[MAX_SLOT];
};

#endif
