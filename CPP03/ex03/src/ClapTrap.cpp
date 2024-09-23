/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:13:34 by lagea             #+#    #+#             */
/*   Updated: 2024/09/23 16:11:46 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("JackBlack"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
    std::cout << "Copy ClapTrap constructor called" << std::endl;
    *this = c;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &c)
{
    std::cout << "Copy ClapTrap assignment operator called" << std::endl;
    if (this != &c)
    {
        this->_name = c._name;
        this->_hitPoints = c._hitPoints;
        this->_energyPoints = c._energyPoints;
        this->_attackDamage = c._attackDamage;    
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}


void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

void ClapTrap::setHitPoints(unsigned int amount)
{
    this->_hitPoints = amount;
}

void ClapTrap::setEnergyPoints(unsigned int amount)
{
    this->_energyPoints = amount;
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
    this->_attackDamage = amount;
}

std::string ClapTrap::getName(void) const
{
    return this->_name;
}

unsigned int ClapTrap::getHitPoints(void) const
{
    return this->_hitPoints;
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
    return this->_energyPoints;
}

unsigned int ClapTrap::getAttackDamage(void) const
{
    return this->_attackDamage;    
}

void ClapTrap::attack(const std::string &target)
{
    if (this->_hitPoints <= 0){
        std::cout << "ClapTrap " << _name << " is dead." << std::endl;
    }
    else if (this->_energyPoints <= 0){
        std::cout << "ClapTrap " << _name << "does not have enough energy points." << std::endl;
    }
    else{
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints <= 0){
        std::cout << "ClapTrap " << _name << " have already 0 hit points.";
    }
    else if (this->_hitPoints < amount){
        std::cout << "ClapTrap " << _name << " take " << _hitPoints << " damage." << std::endl; 
        this->_hitPoints = 0;
    }
    else{
        std::cout << "ClapTrap " << _name << " take " << amount << " ponts of damage." << std::endl;
        this->_hitPoints -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints <= 0){
        std::cout << "ClapTrap " << _name << " havec no more energy points." << std::endl;
    }
    else{
        std::cout << "ClapTrap " << _name << " being repaired of " << amount << " hit points." << std::endl;
        this->_hitPoints += amount;
        this->_energyPoints--;
    }
}
