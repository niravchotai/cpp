/*
 * fileStream.cpp
 *
 *  Created on: May 8, 2013
 *      Author: nirav.chotai
 */
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include "std_lib_facilities.h"

using namespace std;

class Reading{
public:
	int hour;
	double temperature;
	Reading(int h, double t) : hour(h), temperature(t){}
};

int main(){

	cout << "Please enter input file name:";
	string name;
	cin >> name;

	ifstream ist(name.c_str());
	if(!ist) error("Can't open input file", name);

	cout << "Please enter output file name:";
	cin >> name;
	ofstream ost(name.c_str());
	if(!ost) error("Can't open output file",name);

	vector<Reading> temps;
	int hour;
	double temperature;
	while(ist >> hour >> temperature){
		if(hour < 0 || 23 < hour)	error("hour out of range");
		temps.push_back(Reading(hour,temperature));
	}

	for(int i=0; i<temps.size(); ++i){
		ost << "(" << temps[i].hour <<"," << temps[i].temperature << ")" << endl;
	}

	return 0;
}
