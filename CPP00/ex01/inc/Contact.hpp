/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:25:04 by lagea             #+#    #+#             */
/*   Updated: 2024/09/12 22:21:46 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_HPP__
#define __CONTACT_HPP__

#include <string>
using namespace std;

class Contact
{
    public:
        Contact();
        ~Contact();

        void	setName(const string name);
		void	setLastName(const string lastname);
		void	setNickName(const string nickname);
		void	setPhoneNumber(const string phoneNumber);
		void	setDarkestSecret(const string darkestsecret);
		
        const string  getName()const;
        const string  getLastName()const;
        const string  getNickname()const;
        const string  getPhoneNumber()const;
        const string  getDarkestSecret() const;
        
    private:
        string  _name;
        string  _lastName;
        string  _nickname;
        string	_phoneNumber;
        string  _darkestSecret;
};

#endif