/*
 * Shape.cpp
 *
 *  Created on: 15-Apr-2013
 *      Author: nirav.chotai
 */
#include <iostream>
#include "Shape.h"
using namespace std;

//Constructor
Shape::Shape(const string color){
	this->color = color;
}

//Getter
string Shape::getColor() const{
	return color;
}

//Setter
void Shape::setColor(const string color){
	this->color = color;
}

//member functions
void Shape::print() const{
	cout << "Shape of color: " << color;
}



