/*
 * counter.h
 *
 *  Created on: May 1, 2013
 *      Author: nirav.chotai
 */

#ifndef COUNTER_H_
#define COUNTER_H_
#include <iostream>
using namespace std;

class Counter{
private:
	int count;
public:
	Counter(int count=0);	//constructor
	int getCount() const;	//getter
	void setCount(int count);	//setter
	Counter & operator++();		//++prefix
	const Counter operator++(int dummy); //postfix++

	friend  ostream & operator<<(ostream &out, const Counter &counter);
};

#endif /* COUNTER_H_ */
