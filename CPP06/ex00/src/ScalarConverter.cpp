/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:16:44 by lagea             #+#    #+#             */
/*   Updated: 2024/11/01 17:35:08 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

void ScalarConverter::convert(const std::string &literal)
    {
        if (literal.length() == 1 && !std::isdigit(literal[0]))
        {
            convertChar(literal[0]);
        }
        else if (isIntLiteral(literal))
        {
            convertInt(std::atoi(literal.c_str()));
        }
        else if (isFloatLiteral(literal))
        {
            convertFloat(std::atof(literal.c_str()));
        }
        else if (isDoubleLiteral(literal))
        {
            convertDouble(std::strtod(literal.c_str(), NULL));
        }
        else
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: impossible" << std::endl;
            std::cout << "double: impossible" << std::endl;
        }
    }

bool ScalarConverter::isIntLiteral(const std::string &literal)
{
    char *end;
    long value = std::strtol(literal.c_str(), &end, 10);
    if (*end == '\0' && value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max())
    {
        return true;
    }
    return false;
}

bool ScalarConverter::isFloatLiteral(const std::string &literal)
{
    return literal.find("f") != std::string::npos;
}

bool ScalarConverter::isDoubleLiteral(const std::string &literal)
{
    char *end;
    std::strtod(literal.c_str(), &end);
    return *end == '\0';
}

void ScalarConverter::convertChar(char c)
{
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void ScalarConverter::convertInt(int value)
{
    if (value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max() || !std::isprint(value))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
    std::cout << "int: " << value << std::endl;
    std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
}

void ScalarConverter::convertFloat(float value)
{
    if (std::isnan(value) || std::isinf(value) || value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
        std::cout << "char: impossible" << std::endl;
    else if (!std::isprint(static_cast<int>(value)))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;

    if (std::isnan(value) || std::isinf(value) || value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(value) << std::endl;

    std::cout << std::fixed << std::setprecision(1) << "float: " << value << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(value) << std::endl;
}

void ScalarConverter::convertDouble(double value)
{
    if (std::isnan(value) || std::isinf(value) || value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
        std::cout << "char: impossible" << std::endl;
    else if (!std::isprint(static_cast<int>(value)))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
        
    if (std::isnan(value) || std::isinf(value) || value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(value) << std::endl;
        
    std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(value) << "f" << std::endl;
    std::cout << "double: " << value << std::endl;
}

