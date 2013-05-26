/*
 * Point.cpp
 *
 *  Created on: 14-Apr-2013
 *      Author: nirav.chotai
 */
//Implementation File
#include <iostream>
#include "Point.h"
using namespace std;

//Constructor with default arguments
Point::Point(const int x, const int y, const int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
//Getters
int Point::getX() const { return x; }
int Point::getY() const { return y; }
int Point::getZ() const { return z; }

//Setters
void Point::setX(const int x) { this->x = x; }
void Point::setY(const int y) { this->y = y; }
void Point::setZ(const int z) { this->z = z; }

//public functions
void Point::print() const{
	cout << "(" << x << "," << y << "," << z << ")" << endl;
}
void Point::move() {}

