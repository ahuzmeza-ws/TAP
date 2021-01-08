/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   point.h          										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2020/12/28 20:38 by alinhuzmezan                                */
/*   Updated: 2020/12/28 23:29 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

//
//  point.h
//  workspace_C++
//
//  Created by Alin Huzmezan on 28.12.2020.
//  Copyright © 2020 Alin Huzmezan. All rights reserved.
//

#ifndef point_h
#define point_h

#include <iostream>
using namespace std;

class Point_2D {
		
	public:
		
		// members
		int 	x;
		int 	y;
	
		// constructors
		Point_2D();
		Point_2D(int, int);
		Point_2D(Point_2D &);
		// deconstructor
		~Point_2D();
		// operators
		// equals
		Point_2D&		operator =	(const Point_2D &);
		// arithmetic
		friend Point_2D operator +	(const Point_2D &, const Point_2D &);
		friend Point_2D operator -	(const Point_2D &, const Point_2D &);
		friend Point_2D operator *	(const Point_2D &, const Point_2D &);
		friend Point_2D operator *	(const Point_2D &, const int);
		friend Point_2D operator /	(const Point_2D &, const Point_2D &);
		friend Point_2D operator /	(const Point_2D &, const int);
		Point_2D& 		operator +=	(const Point_2D &);
		Point_2D&		operator -=	(const Point_2D &);
		Point_2D& 		operator *= (const Point_2D &);
		Point_2D& 		operator /= (const Point_2D &);
		Point_2D& 		operator ++ ();			 // prefix  incr.	
		Point_2D& 		operator ++ (const int); // postfix incr.
		Point_2D& 		operator -- (); 		 // prefix  decr.
		Point_2D& 		operator -- (const int); // postfix decr.
		// binary exp
		bool 			operator == (const Point_2D &);
		bool 			operator != (const Point_2D &);
		bool			operator < 	(const Point_2D &);
		bool 			operator > 	(const Point_2D &);
		bool 			operator <= (const Point_2D &);
		bool 			operator >= (const Point_2D &);
		// IO
		friend ostream& operator << (ostream&, const Point_2D&);
		friend istream& operator >> (istream&, 	     Point_2D&);
		// methods
		virtual int 	distanceTo(const Point_2D &);

}; // eOF class Point_2d

class Point_3D : public Point_2D {

	public:
		int 	z;
		
		// constructors
		Point_3D();
		Point_3D(int, int, int);
		Point_3D(Point_3D &);
		// deconstructor
		~Point_3D();
		
		// IO
		friend ostream& operator << (ostream&, const Point_3D&);
		friend istream& operator >> (istream&, 	     Point_3D&);

}; // eOf class Point_3d

#endif /* point_h */

