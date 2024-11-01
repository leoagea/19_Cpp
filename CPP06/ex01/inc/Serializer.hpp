/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:36:55 by lagea             #+#    #+#             */
/*   Updated: 2024/11/01 18:03:06 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIALIZER_HPP__
#define __SERIALIZER_HPP__

#include <iostream>
#include <stdint.h>

struct Data
{
    int value;
    std::string text;
};

class Serializer
{
    public:
        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);
        
    private:
        Serializer() {}
        Serializer(const Serializer &ref) {}
        Serializer &operator=(const Serializer &ref);
        ~Serializer();
};

#endif
