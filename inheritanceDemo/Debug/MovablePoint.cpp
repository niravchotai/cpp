/*
 * MovablePoint.cpp
 *
 *  Created on: 14-Apr-2013
 *      Author: nirav.chotai
 */
//Implementation file
#include <iostream>
#include "MovablePoint.h"
using namespace std;

//Constructor implementation
MovablePoint::MovablePoint(const int x, const int y, const int z,
		const int xSpeed, const int ySpeed, const int zSpeed)
		:Point(x, y, z){		//Use data member initializer to invoke base class constructor
		this->xSpeed = xSpeed;
		this->ySpeed = ySpeed;
		this->zSpeed = zSpeed;
}

//Getters imeplementation
int MovablePoint::getXSpeed() const { return xSpeed; }
int MovablePoint::getYSpeed() const { return ySpeed; }
int MovablePoint::getZSpeed() const { return zSpeed; }

//Setters implementation
void MovablePoint::setXSpeed(const int xSpeed) { this->xSpeed = xSpeed; }
void MovablePoint::setYSpeed(const int ySpeed) { this->ySpeed = ySpeed; }
void MovablePoint::setZSpeed(const int zSpeed) { this->zSpeed = zSpeed; }

//Public functions
void MovablePoint::move(){
	Point::setX(Point::getX() + xSpeed);
	Point::setY(Point::getY() + ySpeed);
	Point::setZ(Point::getZ() + zSpeed);
}

void MovablePoint::print() const{
	Point::print();		//invoke base class function
	cout << "  Speed=" << "(" << xSpeed << "," << ySpeed << "," << zSpeed << ")" << endl;
}
