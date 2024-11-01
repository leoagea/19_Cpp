/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:00:13 by lagea             #+#    #+#             */
/*   Updated: 2024/11/01 17:58:38 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"

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
