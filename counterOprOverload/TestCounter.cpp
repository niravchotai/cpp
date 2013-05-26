/*
 * TestCounter.cpp
 *
 *  Created on: May 3, 2013
 *      Author: nirav.chotai
 */
#include <iostream>
#include "counter.h"
using namespace std;

int main(){

	Counter c1;

	cout << c1 << endl;		//0
	cout << ++c1 << endl;	//1
	cout << c1 << endl;		//1
	cout << c1++ << endl;	//1
	cout << c1 << endl;		//2

	cout << ++++c1 << endl;	//4

	//cout << c1++++ << endl;	//error caused by const return value

	return 0;
}



