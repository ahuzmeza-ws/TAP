/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Fraction.    										   ╦ ╦╔╦╗╔═╗╔═╗╔╦╗    */
/*                                                         ║ ║║║║╠╣ ╚═╗ ║     */
/*                                                         ╚═╝╩ ╩╚  ╚═╝ ╩     */
/*                                                      George Emil Palade    */
/*   Created: 2020/11/29 23:38 by alinhuzmezan                                */
/*   Updated: 2020/12/01 01:29 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FRACTION_h
#define FRACTION_h

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
		Fraction add(const Fraction &);
		Fraction sub(const Fraction &);
		Fraction mul(const Fraction &);
		Fraction div(const Fraction &);
		// other operations
		Fraction simplify();
		Fraction reciproc();
		bool	 equal(const Fraction &);
		void	 print();
		
};

// greatest common denomenator (cmmdc)
int 	GCD(int a, int b);

#endif
// eOf Fraction.h

