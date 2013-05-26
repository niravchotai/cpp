/*
 * main.cpp
 *
 *  Created on: Apr 21, 2013
 *      Author: ispluser
 */
#include <iostream>
#include "point.h"
using namespace std;

int main(){

	Point p1(5,6);
	//cout << p1 << endl;
	operator <<(cout,p1);
	cout << endl;
	p1.set(2,3);
	cout << p1 << endl;
	p1++;
	cout << p1 << endl;
	++p1;
	cout << p1 << endl;
	p1 += 5;
	cout << p1 << endl;

	p1.operator ++();
	cout << p1 << endl;

	p1.operator ++(0);
	cout << p1 << endl;

	p1.operator +=(2);
	cout << p1 << endl;

	cin >> p1;
	cout << p1 << endl;

	return 0;
}



