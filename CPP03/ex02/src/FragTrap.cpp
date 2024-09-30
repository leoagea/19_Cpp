/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:13:34 by lagea             #+#    #+#             */
/*   Updated: 2024/09/30 19:15:39 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Default FragTrap constructor called" << std::endl;
    this->_name = "Jack Black";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap Constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &c)
{
    std::cout << "Copy FragTrap constructor called" << std::endl;
    *this = c;
}

FragTrap &FragTrap::operator=(const FragTrap &c)
{
    std::cout << "Copy FragTrap assignment operator called" << std::endl;
    if (this != &c){
        this->_name = c._name;
        this->_hitPoints = c._hitPoints;
        this->_energyPoints = c._energyPoints;
        this->_attackDamage = c._attackDamage; 
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    if (this->_hitPoints > 0){
        std::cout << "FragTrap " << this->_name << " got a positive high fives request." << std::endl;
    }
    else{
        std::cout << "FragTrap " << this->_name << " is dead." << std::endl;
    }
}
