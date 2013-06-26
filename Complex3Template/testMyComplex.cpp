/*
 * testMyComplex.cpp
 *
 *  Created on: Jun 26, 2013
 *      Author: nirav.chotai
 */
//Testing application
#include <iostream>
#include <iomanip>
#include "MyComplex.h"
using namespace std;

int main(){

	cout << fixed << setprecision(2);

	MyComplex<double> c1(3.1, 4.2);
	cout << c1 << endl;

	MyComplex<double> c2(3.2);
	cout << c2 << endl;

	MyComplex<double> c3 = c1 + c2;
	cout << c3 << endl;

	c3 = c1 + 2.1;
	cout << c3 << endl;

	c3 = 2.2 + c1;
	cout << c3 << endl;

	c3 += c1;
	cout << c3 << endl;

	c3 += 2.3;
	cout << c3 << endl;

	cout << ++c3 << endl;
	cout << c3++ << endl;

	cout << c3 << endl;

	// MyComplex<int> c4 = 5;  // error: implicit conversion disabled
	MyComplex<int> c4 = (MyComplex<int>)5;  // explicit type casting allowed

	cout << c4 << endl;

	MyComplex<int> c5;
	cout << "Enter complex number in (real, imag): ";
	cin >> c5;

	if(cin.good()){
		cout << c5 << endl;
	}else{
		cerr << "Invalid Input" << endl;
	}

	return 0;
}



