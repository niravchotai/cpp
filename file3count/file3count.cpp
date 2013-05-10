/*
 * file3count.cpp
 *
 *  Created on: May 8, 2013
 *      Author: nirav.chotai
 */
//Program to count number of characters
#include <iostream>
#include <fstream>
using namespace std;

int main(){

	ifstream fin;
	fin.open("output.txt");
	char ch;
	int count = 0;

	while(!fin.eof()){
		fin.get(ch);
		count++;
	}

	cout << "Number of characters in file are " << count;
	fin.close();

	return 0;
}



