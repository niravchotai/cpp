/*
 * file1.cpp
 *
 *  Created on: May 8, 2013
 *      Author: nirav.chotai
 */
//Program to write in a text file
#include <iostream>
#include <fstream>
using namespace std;

int main(){

	ofstream fout;
	fout.open("output.txt");
	char str[100] = "This is sample program to write in a text file";
	fout << str;

	//fout.close();

	return 0;
}


