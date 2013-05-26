/*
 * simpleFileIO.cpp
 *
 *  Created on: May 7, 2013
 *      Author: nirav.chotai
 */
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){

	string filename = "test.txt";

	/*
	//write to file
	ofstream fout(filename.c_str());
	if(!fout.is_open()){
		cerr << "Error: open file for output failed!" << endl;
		abort();	//in <cstdlib> header file
	}

	fout << "Nirav" << endl;
	fout << "Nikunj" << endl;
	fout << "Nimesh" << endl;
	fout << "Nilesh" << endl;

	fout.close();*/

	//Read from the file
	ifstream fin(filename.c_str());
	if(!fin.is_open()){
		cerr << "Error: open file for input failed!" << endl;
		abort();
	}

	char ch;
	while(fin.get(ch)){		//till the end of the file
		cout << ch;
	}
	fin.close();

	return 0;
}



