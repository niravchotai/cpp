/*
 * classDemo1.cpp
 *
 *  Created on: 10-Apr-2013
 *      Author: nirav.chotai
 */
#include <iostream>
using namespace std;

class Student
{
public:
	char *name;
	int studentID;
};

int main()
{
	Student student1;
	Student student2;
	char m[] = "Nirav";
	student1.name = m;
	student1.studentID = 1;
	char n[] = "Nimesh";
	student2.name = n;
	student2.studentID = 2;

	cout << "Name of first student: " << student1.name << endl;
	cout << "ID of first student: " << student1.studentID << endl;
	cout << "Name of second student: " << student2.name << endl;
	cout << "ID of second studnet: " << student2.studentID << endl;

	return 0;
}


