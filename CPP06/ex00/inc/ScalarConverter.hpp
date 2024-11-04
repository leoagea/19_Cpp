/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:49:27 by lagea             #+#    #+#             */
/*   Updated: 2024/11/04 14:51:04 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARCONVERTER_HPP__
#define __SCALARCONVERTER_HPP__

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <limits>
#include <cmath>

class ScalarConverter
{
    public:
		static void convert(const std::string &literal);

    private:
        ScalarConverter() {}
		ScalarConverter(const ScalarConverter &ref);
		ScalarConverter &operator=(const ScalarConverter &ref);
        ~ScalarConverter();

		static bool isIntLiteral(const std::string &literal);
		static bool isFloatLiteral(const std::string &literal);
		static bool isDoubleLiteral(const std::string &literal);
		
		static void convertChar(char c);
		static void convertInt(int value);
		static void convertFloat(float value);
		static void convertDouble(double value);
};

#endif
