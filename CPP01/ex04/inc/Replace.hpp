/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:55:01 by lagea             #+#    #+#             */
/*   Updated: 2024/09/15 23:14:13 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __REPLACE_HPP__
#define __REPLACE_HPP__

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

class Replace
{
    public:
        Replace(const std::string filePath, const std::string s1, const std::string s2);
        ~Replace();
        void read();
        void replace();
        void writeToFile();
        
    private:
        std::string _newContent;
        std::string _filePath;
        std::string _s1;
        std::string _s2;
};

#endif