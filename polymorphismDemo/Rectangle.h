/*
 * Rectangle.h
 *
 *  Created on: 15-Apr-2013
 *      Author: nirav.chotai
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

//Rectangle class is a subclass of Shape
class Rectangle : public Shape{
private:
	int length;
	int breadth;
public:
	Rectangle(const int length=1, const int breadth=1, const string color="red");	//Constructor

	int getLength() const;	//Getters
	int getBreadth() const;

	void setLength(const int length);	//Setters
	void setBreadth(const int breadth);

	void print() const;		//Override the virtual function to implement virtual function
	double getArea() const;
};

#endif /* RECTANGLE_H_ */
