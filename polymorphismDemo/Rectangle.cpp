/*
 * Rectangle.cpp
 *
 *  Created on: 15-Apr-2013
 *      Author: nirav.chotai
 */
#include <iostream>
#include "Rectangle.h"
using namespace std;

//Constructor
Rectangle::Rectangle(const int length, const int breadth, const string color)
:Shape(color), length(length), breadth(breadth) {}

//Getters
int Rectangle::getLength() const{
	return length;
}
int Rectangle::getBreadth() const{
	return breadth;
}

//Setters
void Rectangle::setLength(const int length){
	this->length = length;
}
void Rectangle::setBreadth(const int breadth){
	this->breadth = breadth;
}

void Rectangle::print() const{
	cout << "Rectangle: Length = " << length << " and Breadth = " << breadth << ", subclass of ";
	Shape::print();
}

//Implement virtual function inherited from superclass shape
double Rectangle::getArea() const{
	return length*breadth;
}

