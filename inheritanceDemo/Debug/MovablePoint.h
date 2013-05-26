/*
 * MovablePoint.h
 *
 *  Created on: 14-Apr-2013
 *      Author: nirav.chotai
 */
//This is Subclass header file
#ifndef MOVABLEPOINT_H_
#define MOVABLEPOINT_H_

#include "Point.h"	//Include header of base class

//class declaration
class MovablePoint : public Point{	//Now MovablePoint is a subclass of Point
private:
	int xSpeed, ySpeed, zSpeed;
public:
	//Constructor
	MovablePoint(const int x, const int y, const int z,
			const int xSpeed=0, const int ySpeed=0, const int zSpeed=0);
	//Getters
	int getXSpeed() const;
	int getYSpeed() const;
	int getZSpeed() const;

 	//Setters
	void setXSpeed(const int xSpeed);
	void setYSpeed(const int ySpeed);
	void setZSpeed(const int zSpeed);

	//public methods
	void move();
	void print() const;
};

#endif /* MOVABLEPOINT_H_ */
