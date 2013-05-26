/*
 * specTemplate.cpp
 *
 *  Created on: May 4, 2013
 *      Author: nirav.chotai
 */
//Example of Template Specialization
#include <iostream>
#include <cctype>
using namespace std;

template <typename T>
class Container{
private:
	T x;
public:
	Container (const T y) : x(y) {}
	T inc()	{
		return x+1;
	}
};

template <>
class Container <char>{
private:
	char x;
public:
	Container (const char y) : x(y) {}
	char uppercase(){
		return toupper(x);
	}
};

int main(){
	Container<float> i(5.5);
	Container<char> c('a');

	cout << i.inc() << endl;
	//cout << c.inc() << endl;
	cout << c.uppercase() << endl;

	return 0;
}
