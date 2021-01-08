/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   point.cpp        										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2020/12/28 20:38 by alinhuzmezan                                */
/*   Updated: 2020/12/28 23:27 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

//
//  point.cpp
//  workspace_C++
//
//  Created by Alin Huzmezan on 28.12.2020.
//  Copyright © 2020 Alin Huzmezan. All rights reserved.
//

#include "point.h"
#include <cmath>

Point_2D:: Point_2D() {

}

Point_2D:: Point_2D(int _x, int _y)
{
	this->x = _x;
	this->y = _y;
}

Point_2D:: Point_2D(Point_2D &_other) {
	this->x = _other.x;
	this->y = _other.y;
}

Point_2D:: ~Point_2D() {
	this->x = 0;
	this->y = 0;
}

int Point_2D:: distanceTo(const Point_2D &_other) {
	
	// Calculating distance 
    return sqrt(pow(_other.x - this->x, 2) +  
                pow(_other.y - this->y, 2) * 1.0); 
	
}

Point_2D& Point_2D::operator=(const Point_2D &_other) {
	
	this->x = _other.x;
	this->y = _other.y;

	return (*this);
}

Point_2D operator+(const Point_2D &A, const Point_2D &B) {
	
	Point_2D _new(A.x + B.x, A.y + B.y);
	
	return (_new);
}

Point_2D operator-(const Point_2D &A, const Point_2D &B) {
	
	Point_2D _new(A.x - B.x, A.y - B.y);
	
	return (_new);
}

Point_2D operator*(const Point_2D &A, const Point_2D &B) {

	Point_2D _new(A.x * B.x, A.y * B.y);
	
	return (_new);
}
Point_2D operator*(const Point_2D &A, const int factor) {

	Point_2D _new(A.x * factor, A.y * factor);
	
	return (_new);
}

Point_2D operator/(const Point_2D &A, const Point_2D &B) {

	Point_2D _new(A.x * B.x, A.y * B.y);
	
	return (_new);
}
Point_2D operator/(const Point_2D &A, const int factor) {

	Point_2D _new(A.x * factor, A.y * factor);
	
	return (_new);
}

Point_2D& Point_2D::operator+=(const Point_2D &_other) {
	
	this->x += _other.x;
	this->y += _other.y;

	return (*this);
}

Point_2D& Point_2D::operator-=(const Point_2D &_other) {
	
	this->x -= _other.x;
	this->y -= _other.y;

	return (*this);
}

Point_2D& Point_2D::operator*=(const Point_2D &_other) {
	
	this->x *= _other.x;
	this->y *= _other.y;

	return (*this);
}

Point_2D& Point_2D::operator/=(const Point_2D &_other) {
	
	this->x /= _other.x;
	this->y /= _other.y;

	return (*this);
}

Point_2D& Point_2D::operator++() {
	
	this->x++;
	this->y++;

	return (*this);
}

Point_2D& Point_2D::operator--() {
	
	this->x--;
	this->y--;

	return (*this);
}

Point_2D& Point_2D::operator++(int) {
	
	this->x++;
	this->y++;

	return (*this);
}

Point_2D& Point_2D::operator--(int) {
	
	this->x--;
	this->y--;

	return (*this);
}

bool Point_2D::operator==(const Point_2D &_other) {

	return ( this->x == _other.x && this->y == _other.y);
}

bool Point_2D::operator!=(const Point_2D &_other) {

	return ( this->x != _other.x && this->y != _other.y);
}

bool Point_2D::operator<(const Point_2D &_other) {

	return ( this->y < _other.y || (this->y == _other.y && this->x < _other.x) );
}

bool Point_2D::operator>(const Point_2D &_other) {

	return ( this->y > _other.y || 
			(this->y == _other.y && this->x > _other.x) );
}

bool Point_2D::operator<=(const Point_2D &_other) {

	return ( this->y <= _other.y || 
			(this->y == _other.y && this->x <= _other.x) );
}

bool Point_2D::operator>=(const Point_2D &_other) {

	return ( this->y >= _other.y || 
			(this->y == _other.y && this->x >= _other.x) );
}

std::ostream& operator<<(std::ostream& out, const Point_2D &_p)
{
    out <<'['<< _p.x << ',' << _p.y <<']';

    return (out);
}

std::istream& operator>>(std::istream& in, Point_2D &_p)
{
	cout<<"x= ";
	in >> _p.x;
	cout<<"y= ";
	in >> _p.y;

	return (in);
}

// =============================================================================
// Point_3D
Point_3D:: Point_3D() {

}

Point_3D:: Point_3D(int _x, int _y, int _z)
{
	this->x = _x;
	this->y = _y;
	this->z = _z;
}

Point_3D:: Point_3D(Point_3D &_other) {
	this->x = _other.x;
	this->y = _other.y;
	this->z = _other.z;
}

Point_3D:: ~Point_3D() {
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

std::ostream& operator<<(std::ostream& out, const Point_3D &_p)
{
    out <<'['<< _p.x << ',' << _p.y <<',' << _p.z <<']';

    return (out);
}

std::istream& operator>>(std::istream& in, Point_3D &_p)
{
	cout<<"x= ";
	in >> _p.x;
	cout<<"y= ";
	in >> _p.y;
	cout<<"z= ";
	in >> _p.z;

	return (in);
}

