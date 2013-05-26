/*
 * fileIgnore.cpp
 *
 *  Created on: May 17, 2013
 *      Author: nirav.chotai
 */
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream fin("test.txt");

	if(!fin){
		cout << "Can not open such file.\n";
		return 1;
	}

	//ignore up to 10 char or until first space is found
	fin.ignore(5, ' ');
	char c;
	while(fin){
		fin.get(c);
		if(fin)
			cout << c;
	}
	fin.close();
	return 0;
}



