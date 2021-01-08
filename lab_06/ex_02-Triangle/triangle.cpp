/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   triangle.cpp     										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2020/12/29 03:55 by alinhuzmezan                                */
/*   Updated: 2020/12/29 22:01 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#include "triangle.h"

#include <cmath>
#include <iostream>
using namespace std;

Triangle:: Triangle() {

}

Triangle:: Triangle(const int _l1, const int _l2, const int _l3)
{
	this->l1 = _l1;
	this->l2 = _l2;
	this->l3 = _l3;
}

Triangle:: Triangle(Triangle &_other) {
	this->l1 = _other.l1;
	this->l2 = _other.l2;
	this->l3 = _other.l3;
}

Triangle:: ~Triangle() {
	
	this->l1 = 0;
	this->l2 = 0;
	this->l3 = 0;
}

double Triangle:: getArea() {

// Rules for triangle
	// Length of sides must be positive  
    // and sum of any two sides  
    // must be smaller than third side.  
    
    int 	a = this->l1;
    int 	b = this->l2;
    int 	c = this->l3;
    double	area;
    
    if (a < 0 || b < 0 || c < 0 ||  
       (a + b <= c) || a + c <= b ||  
                       b + c <= a)  
    {  
        exit(0);  
    }  
    
    area = (a + b + c) / 2; 
     
    return (
    sqrt(
			area * (area - a) 
				 * (area - b) 
				 * (area - c)
		) 
	);  
}

double Triangle:: getPerimeter() {
	return (this->l1 + this->l2 + this->l3);
}

std::ostream& operator<<(std::ostream& out, const Triangle &_t)
{
    out <<'/' << _t.l1 <<','<< _t.l2 <<','<< _t.l3;
    
    return (out);
}

std::istream& operator>>(std::istream& in, Triangle &_t)
{
	in >> _t.l1;
	in >> _t.l2;
	in >> _t.l3;

	return (in);
}

