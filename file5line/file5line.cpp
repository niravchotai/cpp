/*
 * file5line.cpp
 *
 *  Created on: May 8, 2013
 *      Author: nirav.chotai
 */
//Program to count number of line from file
#include <iostream>
#include <fstream>
using namespace std;

int main(){

	ifstream fin;
	fin.open("output.txt");
	char str[50];
	int count = 0;

	while(!fin.eof()){
		fin.getline(str,50);
		count++;
	}
	cout << "The number of lines in file are " << count;
	fin.close();

	return 0;
}



