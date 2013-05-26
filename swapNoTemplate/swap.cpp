/*
 * swap.cpp
 *
 *  Created on: May 4, 2013
 *      Author: nirav.chotai
 */
//swap demo without template
#include <iostream>
using namespace std;

void swap(int *a, int *b);
void swap(float *c, float *d);
void swap(char *x, char *y);

int main(){
	int a=1,b=2;
	float c=1.5,d=2.5;
	char x='A',y='B';

	cout << "Before:" << endl;
	cout << "The value of a=" << a << " and b=" << b << endl;
	cout << "The value of c=" << c << " and d=" << d << endl;
	cout << "The value of x=" << x << " and y=" << y << endl;

	swap(&a, &b);
	swap(&c, &d);
	swap(&x, &y);

	cout << "After:" << endl;
	cout << "The value of a=" << a << " and b=" << b << endl;
	cout << "The value of c=" << c << " and d=" << d << endl;
	cout << "The value of x=" << x << " and y=" << y << endl;

	return 0;
}

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void swap(float *c, float *d){
	float temp;
	temp = *c;
	*c = *d;
	*d = temp;
}
void swap(char *x, char *y){
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
