/*
 * stack.cpp
 *
 *  Created on: Apr 22, 2013
 *      Author: ispluser
 */
//implementation file
#include <iostream>
#include "stack.h"
using namespace std;

stack::stack(){
	tos = 0;
	cout << "Stack initialized\n";
}
stack::~stack(){
	cout << "Stack destroyed\n";
}
void stack::push(int i){
	if(tos==SIZE){
		cout << "Stack is full\n";
		return;
	}
	stck[tos]=i;
	tos++;
}
int stack::pop(){
	if(tos==0){
		cout << "Stack underflow\n";
		return 0;
	}
	tos--;
	return stck[tos];
}
