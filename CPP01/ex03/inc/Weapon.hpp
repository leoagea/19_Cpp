/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:11:22 by lagea             #+#    #+#             */
/*   Updated: 2024/09/15 17:49:11 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON__HPP__
#define __WEAPON__HPP__

#include <string>

class Weapon
{
    public:
        Weapon(const std::string type);
        ~Weapon();
        void  setType(const std::string type);
        const std::string getType();
        
    private:
        std::string _type;
};

#endif