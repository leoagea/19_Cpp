/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:26:51 by lagea             #+#    #+#             */
/*   Updated: 2024/09/12 18:08:25 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"

Contact::Contact()
{
    
}

Contact::~Contact()
{
    
}

int Contact::GetIndex(const Contact &c)
{
    return _index;
}

int Contact::GetPhoneNumber(const Contact &C)
{
    return _phoneNumber;
}

string Contact::GetName(const Contact &c)
{
    return _name;
}

string Contact::GetLastName(const Contact &c)
{
    return _lastName;
}

string Contact::GetNickname(const Contact &c)
{
    return _nickname;
}