/*
 * main.cpp
 *
 *  Created on: May 6, 2013
 *      Author: nirav.chotai
 */
//Example of Template Overloading
#include <iostream>
using namespace std;

template <typename T>
void mySwap(T &a, T &b);	//swap two variable

template <typename T>
void mySwap(T a[], T b[], int size);	//swap two arrays

template <typename T>
void print(T a[], int size);	//print an array

int main(){
	int num1=2, num2=3;
	cout << "Before swap: num1 = " << num1 << " and num2 = " << num2 << endl;
	mySwap(num1, num2);
	cout << "After swap: num1 = " << num1 << " and num2 = " << num2 << endl;

	const int SIZE=3;
	int arr1[]={1,2,3}, arr2[]={4,5,6};
	mySwap(arr1, arr2, SIZE);
	print(arr1, SIZE);
	print(arr2, SIZE);
}

template <typename T>
void mySwap(T &a, T &b){
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
void mySwap(T a[], T b[], int size){
	T temp;
	for(int i=0; i<size; i++){
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

template <typename T>
void print(T a[], int size){
	cout << "(";
	for(int i=0; i<size; i++){
		cout << a[i];
		if(i<size-1)	cout<<" , ";
	}
	cout << ")" << endl;
}
