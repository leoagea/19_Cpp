/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:25:04 by lagea             #+#    #+#             */
/*   Updated: 2024/09/12 18:08:18 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
using namespace std;

class Contact
{
    public:
        Contact();
        ~Contact();
        
        int     GetIndex(const Contact &C);
        int     GetPhoneNumber(const Contact &C);
        string  GetName(const Contact &C);
        string  GetLastName(const Contact &C);
        string  GetNickname(const Contact &C);
        
    private:
        int     _index;
        int     _phoneNumber;
        string  _name;
        string  _lastName;
        string  _nickname;
        string  _darkestSecret;
};
