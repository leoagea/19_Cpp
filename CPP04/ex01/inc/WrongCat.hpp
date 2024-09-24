/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:06:21 by lagea             #+#    #+#             */
/*   Updated: 2024/09/23 18:10:09 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_HPP__
#define __WRONGCAT_HPP__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:

        WrongCat();
        WrongCat(const WrongCat &ref);
        WrongCat &operator=(const WrongCat &ref);
        ~WrongCat();

        void makeSound() const;
};

#endif
