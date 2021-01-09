/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp         										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2020/12/29 00:48 by alinhuzmezan                                */
/*   Updated: 2020/12/29 01:03 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#include "pers.h"

#include <iostream>
using namespace std;

int main()
{
	Student 	b;
	Profesor 	c;
	Angajat 	d;
	
	b.CNP = "123";
	b.nume = "a A";
	b.email = "a@";
	b.nota = 10;
	
	c.email = "1";
	c.materie = "c1";
	
	d.email = "2";
	d.departament = "d1";
	
	b.detalii();
	c.detalii();
	d.detalii();
	
	cout<<"\n\n";
	
return (0);
}

