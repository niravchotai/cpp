/*
 * TestComplex.cpp
 *
 *  Created on: Jun 3, 2013
 *      Author: nirav.chotai
 */
#include <iostream>
#include <iomanip>
#include "Complex.h"
using namespace std;

int main(){

	Complex c1, c2(4,5);
	c1.print();		// 0 + i0
	c2.print();		// 4 + i5

	c1.setValue(2,3);
	c1.print();		// 2 + i3

	c1.setReal(0);
	c1.setImag(2);
	c1.print();		// 0 + i2

	cout << boolalpha;	//print true/false instead of 0/1

	cout << endl << "Is Real? " << c1.isReal() << endl;		//false
	cout << endl << "Is Imaginary? " << c1.isImaginary() << endl;	//true
	c1.print();		// 0 + i2
	c2.print();		// 4 + i5

	c1.addInto(c2).addInto(1, 1).print();	// 5 + i8
	c1.print();		// 5 + i8

	c1.addReturnNew(c2).print();	// 9 + i13
	c1.print();		// 5 + i8 - no change in c1
	c1.addReturnNew(1, 1).print();	// 9 + i0
	c1.print();		// 5 + i8 - no change in c1

	return 0;
}



