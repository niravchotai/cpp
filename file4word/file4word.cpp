/*
 * file4word.cpp
 *
 *  Created on: May 8, 2013
 *      Author: nirav.chotai
 */
//Program to count number of words in file
#include <iostream>
#include <fstream>
using namespace std;

int main(){

	ifstream fin;
	fin.open("output.txt");
	char word[500];
	int count = 0;

	while(!fin.eof()){
		fin >> word;
		count++;
	}
	cout << "Number of words in file are " << count;
	fin.close();

	return 0;
}



