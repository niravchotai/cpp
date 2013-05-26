/*
 * sumTemplate.cpp
 *
 *  Created on: May 4, 2013
 *      Author: nirav.chotai
 */
//Template example
#include <iostream>
using namespace std;

template <typename T, typename U>
U sum(const T a, const U b){
	return a + b;
}

int main(){
	cout << sum(1, 2.5) << endl;
	cout << sum(2, 3) << endl;
	cout << sum(4.5, 5) << endl;
	cout << sum(5.6, 6.4) << endl;
	return 0;
}


