/*
 * upper.cpp
 *
 *  Created on: May 4, 2013
 *      Author: nirav.chotai
 */
#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <fstream>
using namespace std;

int main(){
	string str="My Name is Nirav Chotai";

	transform(str.begin(), str.end(), str.begin(), ::toupper);

	cout << str << endl;

	transform(str.begin(), str.end(), str.begin(), ::tolower);

	cout << str << endl;

	return 0;
}



