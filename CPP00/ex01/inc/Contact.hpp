/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:25:04 by lagea             #+#    #+#             */
/*   Updated: 2024/09/16 14:09:56 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_HPP__
#define __CONTACT_HPP__

#include <string>

class Contact
{
    public:
        Contact();
        ~Contact();

        void	setName(const std::string name);
		void	setLastName(const std::string lastname);
		void	setNickName(const std::string nickname);
		void	setPhoneNumber(const std::string phoneNumber);
		void	setDarkestSecret(const std::string darkestsecret);
		
        const std::string  getName()const;
        const std::string  getLastName()const;
        const std::string  getNickname()const;
        const std::string  getPhoneNumber()const;
        const std::string  getDarkestSecret() const;
        
    private:
        std::string  _name;
        std::string  _lastName;
        std::string  _nickname;
        std::string	_phoneNumber;
        std::string  _darkestSecret;
};

#endif
