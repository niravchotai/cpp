/*
 * file2read.cpp
 *
 *  Created on: May 8, 2013
 *      Author: nirav.chotai
 */
//Program to read from text file and display it
#include <iostream>
#include <fstream>
using namespace std;

int main(){

	ifstream fin;
	fin.open("output.txt");
	char ch;

	while(fin.get(ch)){
		cout << ch;
	}

	fin.close();

	return 0;
}



