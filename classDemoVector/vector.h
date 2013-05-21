/*
 * vector.h
 *
 *  Created on: 13-Apr-2013
 *      Author: nirav.chotai
 */

#ifndef VECTOR_H_
#define VECTOR_H_

class point
{
public:
	double x,y;
	void print();
	void offset(double,double);
};

class vector
{
public:
	point start,end;
	void print();
	void offset(double,double);

};


#endif /* VECTOR_H_ */
