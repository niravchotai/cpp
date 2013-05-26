/*
 * Circle.h
 *
 *  Created on: 15-Apr-2013
 *      Author: nirav.chotai
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

//The class Circle is a subclass of Shape
class Circle : public Shape{
private:
	int radius;		//data member
public:
	Circle(const int radius=1, const string color="red");		//constructor
	int getRadius() const;				//Getter
	void setRadius(const int radius); 	//Setter

	void print() const;			//Override the virtual function to implement virtual function
	double getArea() const;
};

#endif /* CIRCLE_H_ */
