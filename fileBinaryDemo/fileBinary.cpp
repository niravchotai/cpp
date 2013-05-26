/*
 * fileBinary.cpp
 *
 *  Created on: May 9, 2013
 *      Author: nirav.chotai
 */
//Student information
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void search(int n);
void deleteRecord(int n);
void updateRecord(int n);

class Student{
	int admno;
	char name[30];
public:
	void getData(){
		cout << "\nEnter the admission no:";
		cin >> admno;
		cout << "\nEnter the name of student:";
		cin >> name;
		//gets(name);
	}
	void showData(){
		cout << admno << "       | " << name << endl;
		//puts(name);
	}
	int retAdmno(){
		return admno;
	}
};

int main(){

	Student obj;
	int n;
	ofstream fout;
	ifstream fin;
	int admissionNo;

	for(;;){
		do{
			cout << endl << "1. Enter data" << endl;
			cout << "2. View data" << endl;
			cout << "3. Update data" << endl;
			cout << "4. Delete data" << endl;
			cout << "5. Search data" << endl;
			cout << "6. Quit" << endl;
			cout << "Enter your choice:";
			cin >> n;
		}while(n<1 || n>6);

		switch(n){
		case 1:
				fout.open("student.dat",ios::binary|ios::app);
				obj.getData();
				fout.write((char*) &obj, sizeof(obj));
				fout.close();
				break;
		case 2:
				cout << "\nAdm No  -  Student Name" << endl;
				cout << "------- |  -------------" << endl;
				fin.open("student.dat",ios::binary);
				while(fin.read((char*) &obj, sizeof(obj))){
					obj.showData();
				}
				fin.close();
				break;
		case 3:
				cout << endl << "Enter the admission number to update a record: ";
				cin >> admissionNo;
				updateRecord(admissionNo);
				break;
		case 4:
				cout << endl << "Enter the admission number to delete a record: ";
				cin >> admissionNo;
				deleteRecord(admissionNo);
				break;
		case 5:
				cout << "\nEnter the admission number to search: ";
				cin >> admissionNo;
				search(admissionNo);
				break;
		case 6:
				cout << "Bye now...!!!";
				return 0;
		default:
			cout << endl << "Enter correct choice";
		}
	}
}

void search(int n){
	Student obj;
	ifstream fin;
	fin.open("student.dat",ios::binary);
	while(fin.read((char*) &obj, sizeof(obj))){
		if(obj.retAdmno() == n){
			obj.showData();
		}
	}
	fin.close();
}

void deleteRecord(int n){
	Student obj;
	ifstream fin;
	fin.open("student.dat",ios::binary);
	ofstream fout;
	fout.open("temp.dat",ios::out|ios::binary);

	while(fin.read((char*) &obj, sizeof(obj))){
		if(obj.retAdmno() != n)
			fout.write((char*) &obj, sizeof(obj));
	}

	fin.close();
	fout.close();
	remove("student.dat");
	rename("temp.dat","student.dat");
}

void updateRecord(int n){
	Student obj;
	fstream fp;
	int found=0;
	fp.open("student.dat",ios::in|ios::out);
	while(fp.read((char*) &obj, sizeof(obj)) && found == 0){
		if(obj.retAdmno() == n){
			obj.showData();
			cout << "\nEnter the new details of student";
			obj.getData();
			int pos = -1*sizeof(obj);
			fp.seekp(pos, ios::cur);
			fp.write((char*) &obj, sizeof(obj));
			found = 1;
		}
	}
}


