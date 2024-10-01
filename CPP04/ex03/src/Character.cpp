/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:42:53 by lagea             #+#    #+#             */
/*   Updated: 2024/10/01 16:37:23 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"
#include "../inc/AMateria.hpp"

AMateria *Character::onFloor[MAX_FLOOR] = {NULL};

Character::Character(const std::string &name) : _name(name)
{
    for (int i = 0; i < MAX_SLOT; i++){
        this->_inventory[i] = NULL;
    }
}

Character::Character(const Character &ref)
{
    *this = ref;
}

Character &Character::operator=(const Character &ref)
{
    if (this != &ref){
        this->_name = ref.getName();
        for (int i=0; i < MAX_SLOT; i++)
            this->_inventory[i] = ref.getInventory(i);
    }
    return *this;
}

Character::~Character()
{
    for (int i=0; i < MAX_SLOT; i++){
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
}

const std::string &Character::getName() const
{
    return this->_name;
}

AMateria *Character::getInventory(int idx) const
{
    if (idx < 0 || idx > 3)
        return NULL;
    return this->_inventory[idx];    
}

void Character::equip(AMateria *m)
{
    if (!m){
        std::cout << "Materia doesn't exist." << std::endl;
        return ;
    }
    
    for (int i=0; i < MAX_SLOT; i++){
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            std::cout << "Character " << this->getName() 
                << " equipped " << m->getType() << " materia"
                << " in his invetory at slot " << i << "." << std::endl;
            return ;    
        }
    }

    std::cout << "Character " << this->getName() << " has a full inventory. "
        << "Materia " << m->getType() << "is being deleted." << std::endl;
    delete m;
}

void Character::unequip(int idx)
{
    if (!this->_inventory[idx]){
        std::cout << "There is no Materia in slot " << idx 
            << " of the inventory." << std::endl;
        return ; 
    }

    std::string type = this->_inventory[idx]->getType();
    std::cout << "Character " << this->getName() 
                << " unequipped " << type << " materia at slot " << idx 
                << " in his inventory." << std::endl;
                
    for (int i=0; i < MAX_FLOOR; i++){
        if (Character::onFloor[i] == NULL)
        {
            Character::onFloor[i] = this->_inventory[idx];
            this->_inventory[idx] = NULL;
            std::cout << "Materia " << type
                << " is now on the floor at slot " << i << "." << std::endl;
            return ;
        }
    }

    std::cout << "There is no more space on the floor. Materia"
        << type << " is being deleted." << std::endl;
    delete this->_inventory[idx];
    this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (!this->_inventory[idx]){
        std::cout << this->getName() << " can't use the materia at index "
            << idx << ". This slot is empty." << std::endl;
        return ;
    }

    this->_inventory[idx]->use(target);
}
