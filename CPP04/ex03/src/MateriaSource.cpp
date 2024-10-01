/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:13:38 by lagea             #+#    #+#             */
/*   Updated: 2024/10/01 16:32:53 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i=0; i < MAX_SLOT; i++){
		this->_materia[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i=0; i < MAX_SLOT; i++){
		delete this->_materia[i];
	}
}

void MateriaSource::learnMateria(AMateria *ref)
{
	if (ref){
		for (int i=0; i < MAX_SLOT; i++)
		{
			if (this->_materia[i] == NULL){
				this->_materia[i] = ref;
				return ;
			}
		}
		std::cout << "No more space in Materia memory."
			<< "Materia source has only 4 spaces to learn Materias."
			<< std::endl;
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i=0; i < MAX_SLOT; i++){
		if (type == this->_materia[i]->getType())
			return this->_materia[i]->clone();
	}
	
	std::cout << "Cannot create MateriaSource. Unknown type." << std::endl;
	return NULL;
}

