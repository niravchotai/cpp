/*
 * file6copy.cpp
 *
 *  Created on: May 8, 2013
 *      Author: nirav.chotai
 */
//Program to copy contents of one file to another file
#include <iostream>
#include <fstream>
using namespace std;

int main(){

	ifstream fin;
	fin.open("output.txt");
	ofstream fout;
	fout.open("sample.txt");

	char ch;
	while(!fin.eof()){
		fin.get(ch);
		fout << ch;
	}

	fin.close();
	fout.close();

	return 0;
}


