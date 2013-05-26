/*
 * point.h
 *
 *  Created on: Apr 21, 2013
 *      Author: ispluser
 */
//Operator overloading example

#ifndef POINT_H_
#define POINT_H_

#include <iostream>
using namespace std;

class Point{
	//overload << and >> operators
	friend ostream& operator<<(ostream& out, const Point& rPoint);
	friend istream& operator>>(istream& in, Point& rPoint);
private:
	int x, y;
public:
	Point(const int x=0, const int y=0) : x(x), y(y){
	//	this->x = x;
	//	this->y = y;
	}
	void set(const int x, const int y);
	//overload unary ++ postfix, prefix, binary +=
	Point& operator++();
	Point& operator++(int dummy);
	Point& operator+=(const int inc);
};

#endif /* POINT_H_ */
