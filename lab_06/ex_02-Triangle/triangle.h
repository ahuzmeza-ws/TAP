/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   triangle.h       										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2020/12/29 03:55 by alinhuzmezan                                */
/*   Updated: 2020/12/29 21:53 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef triangle_h
#define troamgle_h

class Triangle {

public:

	double l1;
	double l2;
	double l3;

	// constructors
	Triangle();
	Triangle(int, int, int);
	Triangle(Triangle &);
	// deconstructor
	~Triangle();
	// methods
	virtual double getArea() ;
	virtual double getPerimeter() ;

}; // eOf class Triangle

class SquareTriangle : public Triangle {

}; // eOf class SquareTriangle

class IsoscelesTriangle : public Triangle {

}; // eOf class IsoscelesTriangle

class EquiilateralTriangle : public IsoscelesTriangle {

}; // eOf class EquiilateralTriangle

class SquareIsoscelesTriangle : public IsoscelesTriangle, SquareTriangle {

}; // eOf class SquareIsoscelesTriangle

#endif
