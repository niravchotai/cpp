/*
 * fileStuent.cpp
 *
 *  Created on: May 26, 2013
 *      Author: nirav.chotai
 */

#include<iostream>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;

void searchRecord(int n);
void deleteRecord(int n);
void updateRecord(int n);

class student
{
	int admNo;
	//int mobNo;
	//long double mobNo;
	char firstName[30], lastName[30], mobNo[10];

public:

	void getData()
	{
		cout << endl << "Enter student details:" << endl;
		cout << "Admission no.:";
		cin >> admNo;
		cout << "First name: "<< endl;
		cin >> firstName;
		cout <<"Last name: " << endl;
		cin >> lastName;
		cout << "Mobile no.: " << endl;
		cin >> mobNo;
	}

	void showData()
	{
		cout << admNo << "       | " << firstName << " " << lastName << " |  " << mobNo << endl;
	}

	int retAdmNO()
	{
		return admNo;
	}

};

int main()
{
	student s1;
	int choice, admId;
	ofstream fout;
	ifstream fin;

	while(1)
	{
		cout << endl <<  "1.Enter data" << endl;
		cout << "2.View data " << endl;
		cout << "3.Update data" << endl;
		cout << "4.Delete data" << endl;
		cout << "5.Search data" << endl;
		cout << "6.Exit" << endl;
		cout << "Enter your choice: " ;
		cin >> choice;

		switch(choice)
		{
		case 1:
			fout.open("student.dat",ios::binary|ios::app);
			s1.getData();
			fout.write((char*) &s1,sizeof(s1));
			fout.close();
			break;

		case 2:
			fin.open("student.dat",ios::binary);
			cout <<endl << "AdmNo.  |      Full name     |  MobileNo." << endl;
			while(fin.read((char*) &s1, sizeof(s1)))
			{
				s1.showData();
			}
			fin.close();
			break;

		case 3:
			cout << endl << "Enter admission no. to update a record : ";
			cin >> admId;
			updateRecord(admId);
			break;

		case 4:
			cout << endl << "Enter admission no. to delete a record : ";
			cin >> admId;
			deleteRecord(admId);
			break;

		case 5:
			cout << endl << "Enter admission no. to search a record : ";
			cin >> admId;
			searchRecord(admId);
			break;

		case 6:
			cout << "!! Program terminated !!";
			exit(0);

		default:
			cout << "Invalid choice";
			break;

		}
	}
}

void searchRecord(int n)
{
	student obj;
	ifstream fin;
	fin.open("student.dat",ios::binary);
	while(fin.read((char*) &obj, sizeof(obj)))
	{
		if(obj.retAdmNO() == n)
			obj.showData();
	}
	fin.close();
}

void deleteRecord(int n)
{
	student obj;
	ifstream fin;
	fin.open("student.dat", ios::binary);
	ofstream fout;
	fout.open("temp.dat", ios::binary);

	while(fin.read((char*) &obj, sizeof(obj)))
	{
		if(obj.retAdmNO() != n)
			fout.write((char*) &obj, sizeof(obj));
	}

	fout.close();
	fin.close();

	remove("student.dat");
	rename("temp.dat", "student.dat");
}

void updateRecord(int n){
	student obj;
	fstream fp;
	int found=0;
	fp.open("student.dat",ios::in|ios::out);
	while(fp.read((char*) &obj, sizeof(obj)) && found == 0)
	{
		if(obj.retAdmNO() == n)
		{
			obj.showData();
			obj.getData();
			int pos = -1*sizeof(obj);
			fp.seekp(pos,ios::cur);
			fp.write((char*) &obj, sizeof(obj));
			found = 1;
		}
	}
}






