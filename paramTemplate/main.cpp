/*
 * main.cpp
 *
 *  Created on: May 5, 2013
 *      Author: nirav.chotai
 */
//Example of parameterize template with regular type
#include <iostream>
using namespace std;

template <typename T, int N>
class ArrayContainer{
private:
	T arr[N];
public:
	T set(const int i, const T val){
		arr[i] = val;
	}
	T get(const int i){
		return arr[i];
	}
};

int main(){
	ArrayContainer<int, 5> intarr;
	ArrayContainer<float, 10> floatarr;

	intarr.set(2,3);
	floatarr.set(3,3.5);

	cout << intarr.get(2) << endl;
	cout << floatarr.get(3) << endl;

	return 0;
}

