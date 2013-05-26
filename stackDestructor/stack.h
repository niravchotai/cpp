/*
 * stack.h
 *
 *  Created on: Apr 22, 2013
 *      Author: ispluser
 */

#ifndef STACK_H_
#define STACK_H_

#include <iostream>
#define SIZE 100

class stack{
private:
	int stck[SIZE];
	int tos;
public:
	stack();	//constructor
	~stack();	//destructor
	void push(int i);
	int pop();
};

#endif /* STACK_H_ */
