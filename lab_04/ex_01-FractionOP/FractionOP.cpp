/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   FractionO    										   ╦ ╦╔╦╗╔═╗╔═╗╔╦╗    */
/*                                                         ║ ║║║║╠╣ ╚═╗ ║     */
/*                                                         ╚═╝╩ ╩╚  ╚═╝ ╩     */
/*                                                      George Emil Palade    */
/*   Created: 2020/11/29 23:27 by alinhuzmezan                                */
/*   Updated: 2020/12/13 21:51 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#include "FractionOP.h"

// CONSTRUCTORS -----------------------------------------------
// 0 args
Fraction:: Fraction() // 0/1
{
	numerator = 0;
	denominator = 1;
}
// 1 arg.
Fraction:: Fraction(int _numerator) // x/1
{
	numerator = _numerator;
	denominator = 1;
}
// 2 arg.
Fraction:: Fraction(int _numerator, int _denomenator) // x/y
{
	numerator = _numerator;
	denominator = _denomenator;
}
// copy-constructor
Fraction:: Fraction(Fraction const &_toBeCopied)
{
	numerator = _toBeCopied.numerator;
	denominator = _toBeCopied.denominator;
}
// -----------------------------------------------------------

// BASIC OPERATIONS ------------------------------------------
Fraction Fraction:: operator+(const Fraction &_other)
{
	Fraction result;
	// 2   4   2*7 + 4*5
	// - + - = ---------
	// 5   7     5 * 7
	result.numerator   = this->numerator * _other.numerator +
						 _other.numerator * this->denominator;
	result.denominator = this->denominator * _other.denominator;
	
	return (result);
}

Fraction operator-(const Fraction &_A, const Fraction &_B)
{
	Fraction result;
	// 2   4   2*7 - 4*5
	// - - - = ---------
	// 5   7     5 * 7
	result.numerator   = _A.numerator * _B.numerator -
						 _B.numerator * _A.denominator;
	result.denominator = _A.denominator * _B.denominator;
	
	return (result);
}

Fraction operator*(const Fraction &_A, const Fraction &_B) 
{
	Fraction result;
	// 2   4   2 * 4
	// - * - = -----
	// 5   7   5 * 7
	result.numerator	= _A.numerator	* _B.numerator;
	result.denominator	= _A.denominator * _B.denominator;
	
	return (result);
}

Fraction operator/(const Fraction &_A, const Fraction &_B) 
{
	Fraction result;

	result.numerator = _A.numerator * _B.denominator;
	result.denominator = _A.numerator * _B.denominator;
	
	return (result);
}
// -----------------------------------------------------------
// OTHER OPRTATIONS ------------------------------------------

Fraction Fraction:: simplify()
{
	Fraction	result;
	int 		common_denomenator;
	
	common_denomenator = GCD(this->numerator, this->denominator);
	
	result.numerator   = this->numerator / common_denomenator;
	result.denominator = this->denominator / common_denomenator;
	
	return (result);
}

Fraction Fraction:: reciproc()
{
	Fraction result;
	//
	//	UNFINISHED
	//
	return (result);
}

bool Fraction:: operator==(const Fraction &_other)
{
	return (this->numerator	  == _other.numerator &&
			this->denominator == _other.denominator);
}

Fraction& Fraction::operator=(const Fraction &_other)
{
	this->numerator = _other.numerator;
	this->denominator = _other.denominator;

	return (*this);	
}

void Fraction::	 print()
{
	cout<< this->numerator <<"/"<< this->denominator;
}
// -----------------------------------------------------------

// STATIC FUNCTIONS ------------------------------------------
int 	GCD(int a, int b)
{
	int 	res;

    do {
        res = a % b;
        a = b;
        b = res;
    } while (res); // 'a' remains GCD
	res = a;
    return (res);
}
// -----------------------------------------------------------
