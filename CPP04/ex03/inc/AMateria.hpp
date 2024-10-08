/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:09:17 by lagea             #+#    #+#             */
/*   Updated: 2024/10/01 16:40:15 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include <string>
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

class AMateria
{
        
    public:
    
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria &ref);
        AMateria &operator=(const AMateria &ref);
        virtual ~AMateria();
        
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
        
    protected:
    
        std::string _type;
};

#endif
