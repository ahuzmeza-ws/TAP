/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Fraction.    										   ╦ ╦╔╦╗╔═╗╔═╗╔╦╗    */
/*                                                         ║ ║║║║╠╣ ╚═╗ ║     */
/*                                                         ╚═╝╩ ╩╚  ╚═╝ ╩     */
/*                                                      George Emil Palade    */
/*   Created: 2020/11/29 23:27 by alinhuzmezan                                */
/*   Updated: 2020/12/01 01:30 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#include "fraction.h"

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
Fraction Fraction:: add(const Fraction &_other)
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

Fraction Fraction:: sub(const Fraction &_other)
{
	Fraction result;
	// 2   4   2*7 - 4*5
	// - - - = ---------
	// 5   7     5 * 7
	result.numerator   = this->numerator * _other.numerator -
						 _other.numerator * this->denominator;
	result.denominator = this->denominator * _other.denominator;
	
	return (result);
}

Fraction Fraction:: mul(const Fraction &_other)
{
	Fraction result;
	// 2   4   2 * 4
	// - * - = -----
	// 5   7   5 * 7
	result.numerator	= this->numerator	* _other.numerator;
	result.denominator	= this->denominator	* _other.denominator;
	
	return (result);
}

Fraction Fraction:: div(const Fraction &_other)
{
	Fraction result;
	// 2   4   2   7
	// - / - = - * -
	// 5   7   5   4
	
	Fraction other_upsideDown;
	other_upsideDown.numerator   = _other.denominator;
	other_upsideDown.denominator = _other.numerator;
	
	result = result.mul(other_upsideDown);
	
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

bool Fraction:: equal(const Fraction &_other)
{
	return (this->numerator	  == _other.numerator &&
			this->denominator == _other.denominator);
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
