/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:57:25 by lagea             #+#    #+#             */
/*   Updated: 2024/10/01 16:35:07 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "../inc/ICharacter.hpp"
#include <iostream>

#define MAX_SLOT 4
#define MAX_FLOOR 100

class AMateria;

class Character : public ICharacter
{
    public:
        Character(const std::string &name);
        Character(const Character &ref);
        Character &operator=(const Character &ref);
        ~Character();
        
        const std::string &getName() const;
        AMateria *getInventory(int idx) const;
        
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        
        static AMateria *onFloor[MAX_FLOOR];
        
    private:
        std::string _name;
        AMateria *_inventory[4];
};

#endif
