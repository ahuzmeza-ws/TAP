/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp         										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2021/01/08 16:40 by alinhuzmezan                                */
/*   Updated: 2021/01/08 17:49 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"

#include <iostream>
using namespace std;

int main()
{
	Mamal m("a", 1);
	Bird p("b", 2);
	Reptila r("c", 3);
	Platipus o("d", 4);

	m.birth();
	m.heterotrof();

	p.fly();

	r.heterotrof();

	o.amfibiu();

	return (0);
}

