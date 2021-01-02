/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp         										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2020/12/28 19:50 by alinhuzmezan                                */
/*   Updated: 2020/12/28 20:05 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#include "employee.h"

#include <iostream>
using namespace std;

int main()
{
	Employee a;
	Manager b;
	
	//cin>> a;
	//cin>> b;
	
	a.setHourlyRate(11);
	a.setNbOfHours(1);
	
	b.setHourlyRate(22);
	b.setNbOfHours(2);
	
	cout<< a <<'\n';
	cout<< b <<'\n';
	
return (0);
}

