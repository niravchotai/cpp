/*
 * MyDynamicArray.h
 *
 *  Created on: Jun 27, 2013
 *      Author: nirav.chotai
 */
//Header file for creating dynamic array of doubles

#ifndef MYDYNAMICARRAY_H_
#define MYDYNAMICARRAY_H_

#include <iostream>
using namespace std;

class MyDynamicArray{
private:
	int size_;		//size of the array
	double *ptr;	//pointer to the elements
public:
	explicit MyDynamicArray(int n = 8);		//Default constructor
	explicit MyDynamicArray(const MyDynamicArray &a);	//Copy constructor
	MyDynamicArray(const double a[], int n);	//construct from double
	~MyDynamicArray();	//Destructor

	const MyDynamicArray & operator=(const MyDynamicArray &rhs);	//Assignment a1 = a2

	bool operator==(const MyDynamicArray &rhs) const;	//a1 == a2
	bool operator!=(const MyDynamicArray &rhs) const;	//a1 != a2

	double operator[] (int index) const;	//a[i]
	double & operator[] (int index);		//a[i] = x

	int size() const{
		return size_;		//return size of the array
	}

	//Friends
	friend ostream & operator<<(ostream &out, const MyDynamicArray &a); //out << a
	friend istream & operator>>(istream &in, MyDynamicArray &a);	//in >> a

};

#endif /* MYDYNAMICARRAY_H_ */
