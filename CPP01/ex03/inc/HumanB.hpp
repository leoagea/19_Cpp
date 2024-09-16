/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:24:03 by lagea             #+#    #+#             */
/*   Updated: 2024/09/16 18:26:04 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
    public:
        HumanB(const std::string name);
        ~HumanB();
        void attack() const;
        void setWeapon(Weapon &weapon);
        
    private:
        std::string _name;
        Weapon *_weapon;
};

#endif
