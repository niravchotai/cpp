/*
 * TestSubstitution.cpp
 *
 *  Created on: 15-Apr-2013
 *      Author: nirav.chotai
 */
/* Test Substituting a subclass instance to a superclass reference. */
#include <iostream>
#include "MovablePoint.h"
using namespace std;

int main(){
	//Point *ptr1 = new Point(3, 4, 5);
	//ptr1->print();

	MovablePoint *ptr2 = new MovablePoint(7, 8, 9, 1, 1, 1);
	ptr2->print();
	ptr2->move();
	ptr2->print();

	//Polymorphism - Substitute a subclass instance to a superclass reference
	Point *ptr3 = new MovablePoint(1, 2, 3, 2, 2, 2);
	ptr3->print();	//(1, 2, 3), Run superclass version..!!!

	ptr3->move();	//error: 'class point' has no member named 'move'
	ptr3->print();
	//delete ptr1;
	//delete ptr2;
	//delete ptr3;

	return 0;
}


