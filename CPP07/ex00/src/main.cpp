/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:00:13 by lagea             #+#    #+#             */
/*   Updated: 2024/11/02 01:22:01 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/whatever.hpp"

#include <iostream>

int main()
{

	std::cout << "============SWAP============" << std::endl;
	std::cout << "------------CHAR------------" << std::endl;
	char a='y', b='z';
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << std::endl;
	swap<char>(a,b);
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << std::endl;
	std::cout << "------------INT------------" << std::endl;
	int c=19, d=42;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << std::endl;
	swap<int>(c,d);
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << std::endl;
	std::cout << "------------DOUBLE------------" << std::endl;
	double e=19.19, f=42.42;
	std::cout << "e: " << e << std::endl;
	std::cout << "f: " << f << std::endl;
	std::cout << std::endl;
	swap<double>(e,f);
	std::cout << "e: " << e << std::endl;
	std::cout << "f: " << f << std::endl;
	std::cout << std::endl;
	std::cout << "------------BOOL------------" << std::endl;
	bool g=0, h=1;
	std::cout << "g: " << g << std::endl;
	std::cout << "h: " << h << std::endl;
	std::cout << std::endl;
	swap<bool>(g,h);
	std::cout << "g: " << g << std::endl;
	std::cout << "h: " << h << std::endl;
	std::cout << std::endl;
	
	std::cout << "============Min============" << std::endl;
	std::cout << "------------CHAR------------" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << std::endl;
	std::cout << min<char>(a,b) << std::endl;
	a='a';
	b='a';
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << std::endl;
	std::cout << min<char>(a,b) << std::endl;
	std::cout << std::endl;
	std::cout << "------------INT------------" << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << std::endl;
	std::cout << min<int>(c,d) << std::endl;
	std::cout << std::endl;
	std::cout << "------------DOUBLE------------" << std::endl;
	std::cout << "e: " << e << std::endl;
	std::cout << "f: " << f << std::endl;
	std::cout << std::endl;
	std::cout << min<double>(e,f) << std::endl;
	std::cout << std::endl;
	std::cout << "------------BOOL------------" << std::endl;
	std::cout << "g: " << g << std::endl;
	std::cout << "h: " << h << std::endl;
	std::cout << std::endl;
	std::cout << min<bool>(g,h) << std::endl;
	std::cout << std::endl;
	
	std::cout << "============MAX============" << std::endl;
	std::cout << "------------CHAR------------" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << std::endl;
	std::cout << max<char>(a,b) << std::endl;
	a='a';
	b='a';
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << std::endl;
	std::cout << max<char>(a,b) << std::endl;
	std::cout << std::endl;
	std::cout << "------------INT------------" << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << std::endl;
	std::cout << max<int>(c,d) << std::endl;
	std::cout << std::endl;
	std::cout << "------------DOUBLE------------" << std::endl;
	std::cout << "e: " << e << std::endl;
	std::cout << "f: " << f << std::endl;
	std::cout << std::endl;
	std::cout << max<double>(e,f) << std::endl;
	std::cout << std::endl;
	std::cout << "------------BOOL------------" << std::endl;
	std::cout << "g: " << g << std::endl;
	std::cout << "h: " << h << std::endl;
	std::cout << std::endl;
	std::cout << max<bool>(g,h) << std::endl;
	std::cout << std::endl;

	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	return 0;
}
