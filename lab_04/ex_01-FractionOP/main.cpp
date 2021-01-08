#include "FractionOP.h"
#include <iostream>
using namespace std;

int 	main()
{
	Fraction a(4, 8);
	Fraction b(8, 14);
	Fraction c(12, 36);
	Fraction rezultat;

	a.print();
	b.print();
	c.print();

	cout << "a + b = ";
	rezultat = a.operator+(b);
	rezultat.print();
	cout << "\n";

	cout << "c - a = ";
	rezultat = c - a;
	rezultat.print();
	cout << "\n";
	
	cout << "a * b = ";
	rezultat = a * b;
	rezultat.print();
	cout << "\n";
	
	cout << "a / b = ";
	rezultat = a/b;
	rezultat.print();
	cout << "\n";
	
	cout << "Simplif c = ";
	rezultat = c.simplify();
	rezultat.print();
	cout << "\n";
	
	cout << "Eq: b = c ?";
	if (a==b /*a.operator==(b)*/)
		cout << "A";
	else
		cout << "F";

	cout << "\n\n";
return (0);
}
