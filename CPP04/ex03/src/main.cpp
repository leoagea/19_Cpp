/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:21:46 by lagea             #+#    #+#             */
/*   Updated: 2024/10/01 17:55:12 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MateriaSource.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Character.hpp"

#define DEFAULT "\033[39m"
#define BLACK "\033[30m"
#define GREY "\033[90m"
#define RED "\033[31m"
#define CYAN "\033[36m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[94m"
#define MAGENTA "\033[35m"

int main()
{
	std::cout << BLUE << "----- PDF Test: -----"
            << std::endl << "\033[0m" << std::endl;
	
	IMateriaSource* src = new MateriaSource();
  	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	std::cout << GREEN << std::endl
				<< "----- Overfilling Character with Materias: -----" << std::endl
				<< "\033[0m" << std::endl;
		
	IMateriaSource* materia_source = new MateriaSource();
	materia_source->learnMateria(new Cure());
	ICharacter* alf = new Character("Alf");
	for (int i = 0; i < MAX_FLOOR + 5; i++) {
		alf->equip(materia_source->createMateria("cure"));
	}
	delete materia_source;
	delete alf;

  	std::cout << YELLOW << std::endl
            << "----- Copy costructor and assignment operator shinenigans -----"
            << "\033[0m" << std::endl;
	
	IMateriaSource* ms = new MateriaSource();
	AMateria *cure = new Cure();
	ms->learnMateria(cure);
	AMateria* temp_materia = ms->createMateria("cure");
	Character* bert = new Character("Bert");
	bert->equip(temp_materia);
	Character *casper = new Character(*bert);
	casper->use(0, *bert);
	casper->use(0, *bert);
	Character *dobby = new Character("Dobby");
	*dobby = *bert;
	dobby->use(0, *bert);
	delete ms;
	delete bert;
	delete dobby;
	delete casper;
	
	// system("leaks AMateria");
	return 0;
}
