/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:00:13 by lagea             #+#    #+#             */
/*   Updated: 2024/11/01 18:37:56 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"

/* Reinterpret cast :
        used to convert a pointer type to another pointer type
        or to convert a pointer type to another classic type (ex: integer)
*/
int main()
{
    Data originalData;
    originalData.value = 42;
    originalData.text = "Hello, World!";

    uintptr_t raw = Serializer::serialize(&originalData);

    Data* deserializedData = Serializer::deserialize(raw);

    if (deserializedData == &originalData)
    {
        std::cout << "Serialization and deserialization successful!" << std::endl;
        std::cout << "Value: " << deserializedData->value << ", Text: " << deserializedData->text << std::endl;
    }
    else
    {
        std::cout << "Serialization and deserialization failed!" << std::endl;
    }

    return 0;
}
