/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp         										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2020/12/29 03:54 by alinhuzmezan                                */
/*   Updated: 2020/12/29 22:03 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#include "triangle.h"

#include <iostream>
using namespace std;

int		main()
{
	Triangle 				x(4, 8, 8);
	SquareTriangle 	  	 	a;
	IsoscelesTriangle 	 	b;
	EquiilateralTriangle 	c;
	SquareIsoscelesTriangle d;


	cout<<"area:  "<< x.getArea()		<<'\n'
		<<"perim: "<< x.getPerimeter() <<'\n';;


	cout<<"\n\n";

return (0);
}
