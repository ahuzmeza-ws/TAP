/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   matrix.cpp       										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2020/12/29 01:13 by alinhuzmezan                                */
/*   Updated: 2020/12/29 03:32 by alinhuzmezan                                */
/* ************************************************************************** */

//
//  matrix.cpp
//  workspace_C++
//
//  Created by Alin Huzmezan on 29.12.2020.
//  Copyright © 2020 Alin Huzmezan. All rights reserved.
//

#include "matrix.h"

#include <iostream>
using namespace std;

Matrix:: Matrix() {

}

void Matrix:: alocMatrix() {

	this->matrix = new int*[ this->li ];
	for (unsigned int i = 0; i < this->li; i++)
		this->matrix[i] = new int[ this->col ];
}

Matrix:: Matrix(int li, int col)
{
	this->li = li;
	this->col = col;

	alocMatrix();
}

Matrix:: Matrix(int li, int col, int fill)
{
	this->li = li;
	this->col = col;

	alocMatrix();

	for (unsigned int i = 0; i < li; i++)
		for (unsigned int j = 1; j < col; j++)
			this->matrix[i][j] = fill;
}

Matrix:: Matrix(Matrix &_other) {
	this->li = _other.li;
	this->col = _other.col;
	this->matrix = _other.matrix;
}

Matrix:: ~Matrix() {

	for (unsigned int i = 0; i < this->li; i++)
		delete [] this->matrix[i];

	delete this->matrix;

	this->li = 0;
	this->col = 0;
}

Matrix& Matrix::operator=(const Matrix &_other) {

	this->li = _other.li;
	this->col = _other.col;

	for (unsigned int i = 0; i < li; i++)
			for (unsigned int j = 0; j < col; j++)
				this->matrix[i][j] = _other.matrix[i][j];

	return (*this);
}

Matrix operator+(const Matrix &A, const Matrix &B) {

	Matrix newMatrix(A.li, A.col);

	for (unsigned int i = 0; i < A.li; i++)
			for (unsigned int j = 0; j < A.col; j++)
				newMatrix.matrix[i][j] = A.matrix[i][j] + B.matrix[i][j];

	return (newMatrix);
}

Matrix operator-(const Matrix &A, const Matrix &B) {

	Matrix newMatrix(A.li, A.col);

	for (unsigned int i = 0; i < A.li; i++)
			for (unsigned int j = 0; j < A.col; j++)
				newMatrix.matrix[i][j] = A.matrix[i][j] - B.matrix[i][j];

	return (newMatrix);
}

Matrix operator*(const Matrix &A, const Matrix &B) {

	Matrix newMatrix(A.li, A.col);

	for(unsigned int i = 1; i <= A.li; ++i)
        for(unsigned int j = 1; j <= B.col; ++j)
            for(unsigned int k = 1; k <= A.col; ++k)
                newMatrix.matrix[i][j] += A.matrix[i][k] * B.matrix[k][j];

	return (newMatrix);
}

Matrix operator/(const Matrix &A, const Matrix &B) {

	Matrix newMatrix(A.li, A.col);

	for (unsigned int i = 0; i < A.li; i++)
		for (unsigned int j = 0; j < A.col; j++)
			newMatrix.matrix[i][j] = (A.matrix[i][j] / B.matrix[i][j]);

	return (newMatrix);
}


Matrix& Matrix::operator+=(const Matrix &_other) {

	for (unsigned int i = 0; i < _other.li; i++)
		for (unsigned int j = 0; j < _other.col; j++)
			this->matrix[i][j] += _other.matrix[i][j];

	return (*this);
}

Matrix& Matrix::operator-=(const Matrix &_other) {

	for (unsigned int i = 0; i < this->li; i++)
			for (unsigned int j = 0; j < this->col; j++)
				this->matrix[i][j] -= _other.matrix[i][j];

	return (*this);
}

Matrix& Matrix::operator*=(const Matrix &_other) {

	for(unsigned int i = 0; i < this->li; ++i)
        for(unsigned int j = 0; j <= this->col; ++j)
            for(unsigned int k = 0; k < _other.col; k++)
                this->matrix[i][j] = this->matrix[i][k] * _other.matrix[k][j];

	return (*this);
}

Matrix& Matrix::operator/=(const Matrix &_other) {

	for(unsigned int i = 0; i < this->li; ++i)
        for(unsigned int j = 0; j <= _other.col; ++j)
            for(unsigned int k = 0 ; k < this->col; k++)
				this->matrix[i][j] = this->matrix[i][j] / _other.matrix[i][j];

	return (*this);
}

Matrix& Matrix::operator++() {


	for (unsigned int i = 0; i < this->li; i++)
			for (unsigned int j = 0; j < this->col; j++)
				this->matrix[i][j] ++;

	return (*this);
}

Matrix& Matrix::operator--() {

	for (unsigned int i = 0; i < this->li; i++)
			for (unsigned int j = 0; j < this->col; j++)
				this->matrix[i][j] --;

	return (*this);
}

Matrix& Matrix::operator++(int) {

	const int N = this->li * this->col;

	for (unsigned int i = 1; i <= N; i++)
		this->matrix[i]++;

	return (*this);
}

Matrix& Matrix::operator--(int) {

	for (unsigned int i = 0; i < this->li; i++)
		for (unsigned int j = 0; j < this->col; j++)
			this->matrix[i][j] --;

	return (*this);
}

bool Matrix::operator==(const Matrix &_other) {

	if ( this->li == _other.li && this->col == _other.col)
	{
		for (unsigned int i = 0; i < this->li; i++)
			for (unsigned int j = 0; j < this->col; j++)
				if (this->matrix[i][j] != _other.matrix[i][j])
					return (false); // !=

		return (true); // ==
	}
	return (false); // !=
}

bool Matrix::operator!=(const Matrix &_other) {

	if ( this->li == _other.li  && this->col == _other.col)
	{
		for (unsigned int i = 0; i < this->li; i++)
			for (unsigned int j = 0; j < this->col; j++)
				if (this->matrix[i][j] != _other.matrix[i][j])
					return (true); // !=

		return (false); // ==
	}

	return (true); // !=
}

bool Matrix::operator<(const Matrix &_other) {

	if ( this->li < _other.li || this->col < _other.col)
	{
		for (unsigned int i = 0; i < this->li; i++)
			for (unsigned int j = 0; j < this->col; j++)
				if (this->matrix[i][j] < _other.matrix[i][j])
					return (true);

		return (true);
	}
	return (false);
}

bool Matrix::operator>(const Matrix &_other) {

	if ( this->li > _other.li || this->col > _other.col)
	{
		for (unsigned int i = 0; i < this->li; i++)
			for (unsigned int j = 0; j < this->col; j++)
				if (this->matrix[i][j] > _other.matrix[i][j])
					return (true);

		return (true);
	}
	return (false);
}

bool Matrix::operator<=(const Matrix &_other) {

	if ( this->li <= _other.li || this->col <= _other.col)
	{
		for (unsigned int i = 0; i < this->li; i++)
			for (unsigned int j = 0; j < this->col; j++)
				if (this->matrix[i][j] <= _other.matrix[i][j])
					return (true);

		return (true);
	}
	return (false);
}

bool Matrix::operator>=(const Matrix &_other) {

	if ( this->li >= _other.li || this->col >= _other.col)
	{
		for (unsigned int i = 0; i < this->li; i++)
			for (unsigned int j = 0; j < this->col; j++)
				if (this->matrix[i][j] >= _other.matrix[i][j])
					return (true);

		return (true);
	}
	return (false);
}

std::ostream& operator<<(std::ostream& out, const Matrix &_M)
{
    out <<"nb of li : "<< _M.li <<'\n';
    out <<"nb of col: "<< _M.col <<'\n';

   for (unsigned int i = 0; i < _M.li; i++)
   {
		for (unsigned int j = 0; j < _M.col; j++)
			out << _M.matrix[i][j] <<'\t';
		out <<'\n';
	}
    return (out);
}

std::istream& operator>>(std::istream& in, Matrix &_M)
{
	cout<<"n= ";
	in >> _M.li;
	cout<<"m= ";
	in >> _M.col;

	for (unsigned int i = 0; i < _M.li; i++)
		for (unsigned int j = 0; j < _M.col; j++)
			in >> _M.matrix[i][j];

	return (in);
}

