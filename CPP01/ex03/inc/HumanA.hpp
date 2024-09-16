/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:24:03 by lagea             #+#    #+#             */
/*   Updated: 2024/09/16 18:26:07 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
    public:
        HumanA(const std::string name, Weapon &weapon);
        ~HumanA();
        void attack() const;
        
    private:
        std::string _name;
        Weapon &_weapon;
};

#endif
