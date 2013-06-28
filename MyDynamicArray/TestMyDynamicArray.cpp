/*
 * TestMyDynamicArray.cpp
 *
 *  Created on: Jun 27, 2013
 *      Author: nirav.chotai
 */
//Test driver for dynamic array

#include <iostream>
#include <iomanip>
#include "MyDynamicArray.h"
using namespace std;

int main(){

	cout << fixed << setprecision(1) << boolalpha;

	MyDynamicArray a1(5);
	cout << a1 << endl;
	cout << a1.size() << endl;

	double d[3] = {1.1, 2.2, 3.3};
	MyDynamicArray a2(d,3);
	cout << a2 << endl;

	MyDynamicArray a3(a2);	//Copy constructor
	cout << a3 << endl;

	a1[2] = 8.8;
	cout << a1[2] << endl;

	cout << (a2 == a3) << endl;
	cout << (a1 == a2) << endl;

	const int SIZE=3;
	MyDynamicArray a4(SIZE);
	cout << "Enter " << SIZE << " elements: ";
	cin >> a4;

	if(cin.good()){
		cout << a4 << endl;
	}else{
		cerr << "Invalid Input" << endl;
	}

	return 0;
}



