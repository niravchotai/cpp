/*
 * counter.cpp
 *
 *  Created on: May 1, 2013
 *      Author: nirav.chotai
 */
//Implementation of counter class
#include <iostream>
#include "counter.h"
using namespace std;

//Constructor
Counter :: Counter(int c) : count(c) {}		//using data member initializer

//Getter
int Counter :: getCount() const {
	return count;
}

//Setter
void Counter::setCount(int c){
	count = c;
}

//++prefix, return reference of this
Counter & Counter::operator ++(){
	++count;
	return *this;
}

//postfix++, return old value by value
const Counter Counter::operator ++(int dummy){
	Counter old(*this);
	++count;
	return old;
}

//Overload stream insertion << operator
ostream & operator<<(ostream & out, const Counter & counter){
	out << counter.count;
	return out;
}

