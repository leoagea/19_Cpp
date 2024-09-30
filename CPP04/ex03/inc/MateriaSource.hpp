/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:48:25 by lagea             #+#    #+#             */
/*   Updated: 2024/09/30 14:53:57 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        /* data */
    public:
        MateriaSource(/* args */);
        ~MateriaSource();

        // virtual AMateria* createMateria(std::string const & type);
};

MateriaSource::MateriaSource(/* args */)
{
}

MateriaSource::~MateriaSource()
{
}


