/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp         										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2020/12/29 01:12 by alinhuzmezan                                */
/*   Updated: 2020/12/29 02:13 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

#include <iostream>
using namespace std;

int 	main()
{	
		//   n  m	fill
	Matrix a(5, 5,  1);
	Matrix b(5,	5, 	2);
	
	a += b;
	
	cout<< a;
	
	cout<<"\n\n";
	
return (0);
}

