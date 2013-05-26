/*
 * main.cpp
 *
 *  Created on: 14-Apr-2013
 *      Author: nirav.chotai
 */

#include<iostream>
#include "point.h"

using namespace std;

int main()
{


		point point1;			//use default constructor
		point point2(4, 5, 6);	//Invoke constructor

		point1.print();			//(0, 0, 0)
		point2.print();			//(4, 5, 6)

		//Object pointers, dynamic object allocation
		point*ptrPoint1, *ptrPoint2;	//Declare 2 pointers
		ptrPoint1 = new point;			//Dynamic memory allocation via new keyword

		ptrPoint2 = new point(1, 2, 3);

		ptrPoint1->print();		// (0, 0, 0)
		ptrPoint2->print();		// (1, 2, 3)

		delete ptrPoint1;
		delete ptrPoint2;

		//Object References
		point &refPoint1 = point1;
		refPoint1.print();		// (0, 0, 0)

		//Array of objects - static memory allocation
		point point[3];
		point[0].print();	// (0, 0, 0)



	return 0;
}


