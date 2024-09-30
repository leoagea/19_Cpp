/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:07:10 by lagea             #+#    #+#             */
/*   Updated: 2024/09/25 19:10:11 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICHARRACTER_HPP__
#define __ICHARRACTER_HPP__

#include <string>
#include "AMateria.hpp"

class ICharacter
{
    public:
    
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

#endif
