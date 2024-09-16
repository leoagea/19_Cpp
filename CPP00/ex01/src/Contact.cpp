/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:26:51 by lagea             #+#    #+#             */
/*   Updated: 2024/09/16 15:38:04 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::setName(const std::string name)
{
    this->_name = name;
}

void Contact::setLastName(const std::string lastname)
{
    this->_lastName = lastname;
}

void Contact::setNickName(const std::string nickname)
{
    this->_nickname = nickname;
}

void Contact::setPhoneNumber(const std::string phonenumber)
{
    this->_phoneNumber = std::atoi(phonenumber.c_str());
}

void Contact::setDarkestSecret(const std::string darkestsecret)
{
    this->_darkestSecret = darkestsecret;
}

const std::string Contact::getName() const
{
	return (this->_name);
}

const std::string Contact::getLastName() const
{
	return (this->_lastName);
}

const std::string Contact::getNickname() const
{
	return (this->_nickname);
}

const std::string Contact::getPhoneNumber() const
{
	return (this->_phoneNumber);
}

const std::string Contact::getDarkestSecret() const
{
	return (this->_darkestSecret);
}
