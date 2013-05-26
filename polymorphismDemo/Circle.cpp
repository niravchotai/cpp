/*
 * Circle.cpp
 *
 *  Created on: 15-Apr-2013
 *      Author: nirav.chotai
 */
#include <iostream>
#include "Circle.h"
#define PI 3.14
using namespace std;

//Constructor
Circle::Circle(const int radius, const string color)
:Shape(color), radius(radius) {}

//Getters
int Circle::getRadius() const{
	return radius;
}

//Setters
void Circle::setRadius(const int radius){
	this->radius = radius;
}

void Circle::print() const{
	cout << "Radius of circle is: " << radius << ", subclass of ";
	Shape::print();
}

//Implement virtual function inherited for superclass Shape
double Circle::getArea() const{
	return radius*radius*PI;
}
