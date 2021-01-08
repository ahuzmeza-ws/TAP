/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp     										   ╦ ╦╔╦╗╔═╗╔═╗╔╦╗    */
/*                                                         ║ ║║║║╠╣ ╚═╗ ║     */
/*                                                         ╚═╝╩ ╩╚  ╚═╝ ╩     */
/*                                                      George Emil Palade    */
/*   Created: 2020/12/14 00:12 by alinhuzmezan                                */
/*   Updated: 2020/12/14 01:58 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#include "sll.h"

#include <iostream>
using namespace std;

int main()
{
	SLL lst;
	
	lst.sl_create(2);
	lst.sl_pushFirst(1);
	lst.sl_pushLast(3);
	
	lst.sl_print();
	cout <<"\n";

	lst.sl_popFirst();
	lst.sl_popLast();
	
	lst.sl_print();
	cout <<"\n";

return (0);
}

