/*
 * point.cpp
 *
 *  Created on: 14-Apr-2013
 *      Author: nirav.chotai
 */


#include<iostream>
#include "point.h"
using namespace std;

	point::point(const int x, const int y, const int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	int point::getX() const {
		return x;
	}

	void point::setX(int x) {
		this->x = x;
	}

	int point::getY() const {
		return y;
	}

	void point::setY(int y) {
		this->y = y;
	}

	int point::getZ() const {
		return z;
	}

	void point::setZ(int z) {
		this->z = z;
	}

	void point::print() const{
	cout << "(" << x << "," << y << "," << z << ")" << endl;
	}

