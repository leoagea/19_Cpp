/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:26:51 by lagea             #+#    #+#             */
/*   Updated: 2024/09/12 22:55:03 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::setName(const string name)
{
    this->_name = name;
}

void Contact::setLastName(const string lastname)
{
    this->_lastName = lastname;
}

void Contact::setNickName(const string nickname)
{
    this->_nickname = nickname;
}

void Contact::setPhoneNumber(const string phonenumber)
{
    this->_phoneNumber = phonenumber;
}

void Contact::setDarkestSecret(const string darkestsecret)
{
    this->_darkestSecret = darkestsecret;
}

const string Contact::getName() const
{
	return (this->_name);
}

const string Contact::getLastName() const
{
	return (this->_lastName);
}

const string Contact::getNickname() const
{
	return (this->_nickname);
}

const string Contact::getPhoneNumber() const
{
	return (this->_phoneNumber);
}

const string Contact::getDarkestSecret() const
{
	return (this->_darkestSecret);
}
