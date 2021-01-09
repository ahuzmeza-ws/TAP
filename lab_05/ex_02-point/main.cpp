/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp         										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2020/12/28 20:38 by alinhuzmezan                                */
/*   Updated: 2020/12/28 23:27 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#include "point.h"

#include <iostream>
using namespace std;

int main()
{
	Point_2D a;
	Point_2D b;
	Point_2D c;
	
	cin >> a;
	b = a;
	c = b;
	
	a++;
	b--;
	
	if (a == a)
		cout << "a = a true";
	
	cout <<'\n'<< a <<' '<< b <<' '<< c <<'\n';	
	
	Point_3D d;
	Point_3D e;
	
	cin >> d;
	cout<< d;
	
	
	cout<<"\n\n";
	
return (0);
}

