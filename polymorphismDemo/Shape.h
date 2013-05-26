/*
 * Shape.h
 *
 *  Created on: 15-Apr-2013
 *      Author: nirav.chotai
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>
using namespace std;

class Shape{
private:
	string color;	//private data member
public:
	Shape(const string color = "red");	//constructor
	string getColor() const;			//Getter
	void setColor(const string color);	//Setter

	//Virtual function, run subclass version if overridden
	virtual void print() const;

	//Pure virtual function, to be implemented by subclass
	//You can not create an instance of Shape
	virtual double getArea() const = 0;
};

#endif /* SHAPE_H_ */
