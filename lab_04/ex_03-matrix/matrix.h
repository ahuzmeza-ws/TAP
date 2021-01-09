/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   matrix.h         										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2020/12/29 01:12 by alinhuzmezan                                */
/*   Updated: 2021/01/05 19:07 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

//
//  matrix.h
//  workspace_C++
//
//  Created by Alin Huzmezan on 29.12.2020.
//  Copyright © 2020 Alin Huzmezan. All rights reserved.
//

#ifndef matrix_h
#define matrix_h

#include <iostream>
using namespace std;

class Matrix {

private:
	int		li;  // nbOf lines
	int		col;  // nbOf columns
	int 	**matrix; // values vector

public:
	// constructors
	Matrix();
	Matrix(int, int);
	Matrix(int, int, int);
	Matrix(Matrix &);
	// deconstructor
	~Matrix();
	// operators
	// equals
	Matrix&			operator =	(const Matrix &);
	// arithmetic
	friend Matrix 	operator +	(const Matrix &, const Matrix &);
	friend Matrix 	operator -	(const Matrix &, const Matrix &);
	friend Matrix 	operator *	(const Matrix &, const Matrix &);
	friend Matrix 	operator /	(const Matrix &, const Matrix &);
	Matrix& 		operator +=	(const Matrix &);
	Matrix&			operator -=	(const Matrix &);
	Matrix& 		operator *= (const Matrix &);
	Matrix& 		operator /= (const Matrix &);
	Matrix& 		operator ++ ();			 // prefix  incr.
	Matrix& 		operator ++ (const int); // postfix incr.
	Matrix& 		operator -- (); 		 // prefix  decr.
	Matrix& 		operator -- (const int); // postfix decr.
	// binary exp
	bool 			operator == (const Matrix &);
	bool 			operator != (const Matrix &);
	bool			operator < 	(const Matrix &);
	bool 			operator > 	(const Matrix &);
	bool 			operator <= (const Matrix &);
	bool 			operator >= (const Matrix &);
	// IO
	friend ostream& operator << (ostream&, const Matrix&);
	friend istream& operator >> (istream&, 	     Matrix&);
	// methods
	void alocMatrix();

}; // eOf class Matrix

#endif /* matrix_h */

