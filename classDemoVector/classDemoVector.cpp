/*
 * classDemoVector.cpp
 *
 *  Created on: 11-Apr-2013
 *      Author: nirav.chotai
 */
#include<iostream>
#include<cstdlib>
#include "vector.h"

using namespace std;

	void point::print()
	{
		cout << "(" << x << "," << y << ")";
	}

	void point::offset(double offsetX, double offsetY)
	{
		x += offsetX;
		y += offsetY;
	}


	void vector::print()
	{
		start.print();
		cout << " -> " ;
		end.print();

		//cout << "(" << start.x << "," << start.y << ") -> (" << end.x << "," << end.y << ")" << endl;
	}

	void vector::offset(double offsetX, double offsetY)
	{
		/* start.x += offsetX;
		start.y += offsetY;
		end.x += offsetX;
		end.y += offsetY; */

		start.offset(offsetX,offsetY);
		end.offset(offsetX,offsetY);
	}


int main()
{

	vector v1;
	/*v1.start.x = 2.0;
	v1.start.y = 4.0;
	v1.end.x = 3.0;
	v1.end.y = 6.0; */
	cout << "Enter coordinates" << endl;

	cout << "Start(x1,y1)" << endl;
	cout << "x1=";
	cin >> v1.start.x;
	cout << "y1=";
	cin >> v1.start.y;

	cout << "Ënd(x2,y2)" << endl;
	cout << "x2=";
	cin >> v1.end.x;
	cout << "y2=";
	cin >>  v1.end.y;

	cout << "Vector representation: " << endl;
	v1.print();

	double x,y;
	cout << endl << "Offset value of x coordinate: ";
	cin >> x;
	cout << "Offset value of y coordinate: ";
	cin >> y;
	v1.offset(x,y);
	cout << endl << "After offsetting : " << endl;
	v1.print();

	return 0;
}
