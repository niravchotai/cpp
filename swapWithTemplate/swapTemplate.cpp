/*
 * swapTemplate.cpp
 *
 *  Created on: May 4, 2013
 *      Author: nirav.chotai
 */
//swap with Template
#include <iostream>
using namespace std;

template <typename T>
void mySwap(T &a, T &b);

int main(){
	int a=1,b=2;
	float c=1.5,d=2.5;
	char x='A',y='B';

	cout << "Before:" << endl;
	cout << "The value of a=" << a << " and b=" << b << endl;
	cout << "The value of c=" << c << " and d=" << d << endl;
	cout << "The value of x=" << x << " and y=" << y << endl;

	mySwap(a, b);
	mySwap(c, d);
	mySwap(x, y);

	cout << "After:" << endl;
	cout << "The value of a=" << a << " and b=" << b << endl;
	cout << "The value of c=" << c << " and d=" << d << endl;
	cout << "The value of x=" << x << " and y=" << y << endl;

	return 0;
}
template <typename T>
void mySwap(T &a, T &b){
	T temp;
	temp = a;
	a = b;
	b = temp;
}


