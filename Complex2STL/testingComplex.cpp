/*
 * testingComplex.cpp
 *
 *  Created on: Jun 25, 2013
 *      Author: nirav.chotai
 */

#include "MyComplex.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(2);

	MyComplex c1(3.1, 4.2);
	cout << c1 << endl;  // (3.10,4.20)

	MyComplex c2(3.1);
	cout << c2 << endl;  // (3.10,0.00)

	MyComplex c3 = c1 + c2;
	cout << c3 << endl;  // (6.20,4.20)

	c3 = c1 + 2.1;
	cout << c3 << endl;  // (5.20,4.20)
	c3 = 2.2 + c1;
	cout << c3 << endl;  // (5.30,4.20)

	c3 += c1;
	cout << c3 << endl;  // (8.40,8.40)
	c3 += 2.3;
	cout << c3 << endl;  // (10.70,8.40)

	cout << ++c3 << endl; // (11.70,8.40)
	cout << c3++ << endl; // (11.70,8.40)
	cout << c3   << endl; // (12.70,8.40)

	// MyComplex c4 = 5.5;  // error: implicit conversion disabled
	MyComplex c4 = (MyComplex)5.5;  // explicit type casting allowed
	cout << c4 << endl; // (5.50,0.00)

	MyComplex c5;
	cout << "Enter a complex number in (real,imag): ";
	cin >> c5;

	if (cin.good()) {  // if no error
	      cout << c5 << endl;
	   } else {
	      cerr << "Invalid input" << endl;
	   }

	return 0;
}
