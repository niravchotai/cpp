/*
 * fileStatus.cpp
 *
 *  Created on: May 31, 2013
 *      Author: nirav.chotai
 */
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void checkStatus(ifstream &fin);

int main(int argc, char* argv[])
{
	if(argc!=2){
		cout << "Usage: Display <Filename>\n";
		return 1;
	}

	ifstream fin(argv[1]);
	if(!fin){
		cout << "Cannot open file...!!";
		return 1;
	}

	char ch;
	while(fin.get(ch)){
		if(fin)
			cout << ch;
		checkStatus(fin);
	}

	checkStatus(fin);	//check final status
	fin.close();
	return 0;
}

void checkStatus(ifstream &fin)
{
	ios::iostate i;

	i = fin.rdstate();

	if(i & ios::eofbit)
		cout << endl << "EOF encountered \n";

	else if(i & ios::failbit)
		cout << "Non-fatal I/O error \n";

	else if(i & ios::badbit)
		cout << "Fatal I/O error \n";
}
