/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   FractionOP.h     										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                                                         ║ ║║║║╠╣ ╚═╗ ║     */
/*                                                         ╚═╝╩ ╩╚  ╚═╝ ╩     */
/*                                                      George Emil Palade    */
/*   Created: 2020/11/29 23:38 by alinhuzmezan                                */
/*   Updated: 2020/12/13 21:53 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FRACTIONOP_h
#define FRACTIONOP_h

#include <iostream>
using namespace std;

class Fraction {

	private:
		int		numerator;
		int		denominator;
	
	public:
		// constructors
		Fraction();
		Fraction(int);
		Fraction(int, int);
		Fraction(const Fraction &);
		// methods 
		// basic operations + - * /
		Fraction operator+(const Fraction &);
		friend Fraction operator-(const Fraction &, const Fraction &);
		friend Fraction operator*(const Fraction &, const Fraction &);
		friend Fraction operator/(const Fraction &, const Fraction &);
		// other operations
		Fraction simplify();
		Fraction reciproc();
		bool	 operator==(const Fraction &);
		Fraction &operator=(const Fraction &);
		void	 print();
		
};

// greatest common denomenator (cmmdc)
int 	GCD(int a, int b);

#endif
// eOf Fraction.h

