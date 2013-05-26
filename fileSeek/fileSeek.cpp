/*
 * fileSeek.cpp
 *
 *  Created on: May 17, 2013
 *      Author: nirav.chotai
 */
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]){
	if(argc!=4){
		cout << "Usage: Change <filename> <character> <char>\n";
		return 1;
	}

	fstream fout(argv[1], ios::in|ios::out|ios::binary);

	if(!fout){
		cout << "Can not open file.\n";
		return 1;
	}

	fout.seekp(atoi(argv[2]), ios::beg);

	fout.put(*argv[3]);
	fout.close();
	return 0;
}


