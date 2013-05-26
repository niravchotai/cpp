/*
 * main.cpp
 *
 *  Created on: Apr 22, 2013
 *      Author: ispluser
 */
#include <iostream>
#include "stack.h"
using namespace std;
int main(){

	stack a, b;

	a.push(1);
	b.push(2);
	a.push(3);
	b.push(4);

	cout << a.pop() << " ";
	cout << a.pop() << " ";
	cout << b.pop() << " ";
	cout << b.pop() << " " << endl;

	return 0;
}



