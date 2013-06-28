/*
 * MyDynamicArray.cpp
 *
 *  Created on: Jun 27, 2013
 *      Author: nirav.chotai
 */
//Implementation file

#include <iostream>
#include <stdexcept>
#include "MyDynamicArray.h"
using namespace std;

//Default Constructor
MyDynamicArray::MyDynamicArray(int n){
	if(n <= 0){
		throw invalid_argument("Error: Size must be greater than zero!");
	}
	//Dynamic allocate memory for n elements
	size_ = n;
	ptr = new double[size_];
	for(int i=0; i<size_; i++){
		ptr[i] = 0.0;	//initialize all elements to zero
	}
}

//Override copy constructor to handle dynamic memory
MyDynamicArray::MyDynamicArray(const MyDynamicArray &a){
	//Dynamic allocate memory for a.size_ and copy
	size_ = a.size_;
	ptr = new double[size_];
	for(int i=0; i<size_; i++){
		ptr[i] = a.ptr[i];		//Copy each element
	}
}

//construct via built-in double
MyDynamicArray::MyDynamicArray(const double a[], int n){
	//Dynamic allocate memory for a.size_ and copy
	size_ = n;
	ptr = new double[size_];
	for(int i=0; i<size_; i++){
		ptr[i] = a[i];		//copy each element
	}
}

//Override the default destructor to handle dynamic memory
MyDynamicArray::~MyDynamicArray(){
	delete[] ptr;	//free dynamically allocated memory
}

// Override the default assignment operator to handle dynamic memory
const MyDynamicArray & MyDynamicArray::operator= (const MyDynamicArray & rhs) {
	if(this != &rhs){	//no self assignment
		if(size_ != rhs.size_){
			//reallocate the memory of the array
			delete[] ptr;
			size_ = rhs.size_;
			ptr = new double[size_];
		}
		//copy elements
		for(int i=0; i<size_; i++){
			ptr[i] = rhs.ptr[i];
		}
	}
	return *this;
}

// Overload comparison operator a1 == a2
bool MyDynamicArray::operator== (const MyDynamicArray & rhs) const {
   if (size_ != rhs.size_) return false;

   for (int i = 0; i < size_; ++i) {
      if (ptr[i] != rhs.ptr[i]) return false;
   }
   return true;
}

// Overload comparison operator a1 != a2
bool MyDynamicArray::operator!= (const MyDynamicArray & rhs) const {
   return !(*this == rhs);
}

// Indexing operator - Read
double MyDynamicArray::operator[] (int index) const {
   if (index < 0 || index >= size_) {
      throw out_of_range("Error: Index out of range!");
   }
   return ptr[index];
}

// Indexing operator - Writable a[i] = x
double & MyDynamicArray::operator[] (int index) {
   if (index < 0 || index >= size_) {
      throw out_of_range("Error: Index out of range!");
   }
   return ptr[index];
}

// Overload stream insertion operator out << a (as friend)
ostream & operator<< (ostream & out, const MyDynamicArray & a) {
   for (int i = 0; i < a.size_; ++i) {
      out << a.ptr[i] << ' ';
   }
   return out;
}

// Overload stream extraction operator in >> a (as friend)
istream & operator>> (istream & in, MyDynamicArray & a) {
   for (int i = 0; i < a.size_; ++i) {
      in >> a.ptr[i];
   }
   return in;
}
