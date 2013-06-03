/*
 * fileSeekg.cpp
 *
 *  Created on: May 31, 2013
 *      Author: nirav.chotai
 */
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]){

	char ch;

	if(argc!=3){
		cout << "Usage: Show <File name> <Starting Location>\n";
		return 1;
	}

	ifstream fin(argv[1], ios::in|ios::binary);
	if(!fin){
		cout << "Cannot open file.!!";
		return 1;
	}

	fin.seekg(atoi(argv[2]), ios::beg);

	while(fin.get(ch)){
		cout << ch;
	}
	return 0;
}



