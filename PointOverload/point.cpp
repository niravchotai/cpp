/*
 * point.cpp
 *
 *  Created on: Apr 21, 2013
 *      Author: ispluser
 */
//Implementation of point.h
#include "point.h"

//non-member friend functions
ostream& operator<<(ostream& out, const Point& rPoint){
	out << "(" << rPoint.x << " , " << rPoint.y << ")";
	return out;
}
istream& operator>>(istream& in, Point& rPoint){
	cout << "Enter x and y co-ordinates: ";
	in >> rPoint.x >> rPoint.y;
	return in;
}
//member functions
void Point::set(const int x, const int y){
	this->x = x;
	this->y = y;
}
Point& Point::operator ++(){
	x++;
	y++;
}
Point& Point::operator ++(int dummy){
	++x;
	++y;
}
Point& Point::operator +=(const int inc){
	x += inc;
	y += inc;
}




