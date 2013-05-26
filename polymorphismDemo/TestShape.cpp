/*
 * TestShape.cpp
 *
 *  Created on: 15-Apr-2013
 *      Author: nirav.chotai
 */
#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main(){

	//Circle object
	Circle c1(5, "blue");
	c1.print();
	cout << endl;
	cout << "Area = " << c1.getArea() << endl;

	//Rectangle object
	Rectangle r1(5, 6, "Green");
	r1.print();
	cout << endl;
	cout << "Area = " << r1.getArea() << endl;

	//Shape s1;		//Can not create an instance of an abstract class Shape

	//Polymorphism
	Shape *s1, *s2;	//Shape pointers

	s1 = new Circle(4);
	s1->print();	//Run subclass version
	cout << endl;
	cout << "Area = " << s1->getArea() << endl;	//Run subclass version of getArea()

	s2 = new Rectangle(3,4);
	s2->print();	//Run subclass version
	cout << endl;
	cout << "Area = " << s2->getArea() << endl;	//Run subclass verison of getArea()

	delete s1;
	delete s2;

	return 0;
}



