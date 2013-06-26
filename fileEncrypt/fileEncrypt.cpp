/*
 * fileEncrypt.cpp
 *
 *  Created on: Jun 24, 2013
 *      Author: nirav.chotai
 */
/* This Program Will Encrypt And Decrypt Any File Text Document
Provides The Maximum Security */

#include <iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{
	char name[30], target[30], ch, mod;   //Declare Variables
	int num[100], i, option;

	cout << "Enter Your Option " << endl;
	cout << "1. To Encrypt The File " << endl;
	cout << "2. To Decrypt The File " << endl;
	cout << "Option : ";
	cin >> option;

	if(option == 1)
	{
		cout << "Enter the name of the file which is to be Encrypted: ";
		cin >> name;

		ifstream fin(name,ios::binary);    //Open the input file in a Binary Mode
		if(!fin)
		{
			cout<<"Error in opening a file!";
			return 1;
		}

		cout << "Enter the name of New Encrypted File Name: ";
		cin >> target;

		ofstream fout(target, ios::binary);  //Open The OutPut File In A Binary Mode
		if(!fout)
		{
			cout<<"Error in opening of Target File : ";
			return 1;
		}

		for(i=0;i<9;i++)
		{
			num[i]=i;
		}

		for(i=14;i<31;i++)
		{
			num[i-5]=i;
		}

		for(i=33;i<=68;i++)
		{
			num[i-7]=i;
		}

		for(i=97;i<=122;i++)
		{
			num[i-35]=i;
		}

		while(fin.get(ch))
		{
			//fin.get(ch);
			//if(ch==EOF)break;

			if((ch>=97) && (ch<=122))	//Encrypt the small letters
			{
				i=97;
				mod=num[ch-i];
				fout<<mod;
			}

			if((ch>=65) && (ch<=90))	//Encrypt the capital letters
			{
				i=39;
				mod=num[ch-i];
				fout<<mod;
			}

			if((ch>=48) && (ch<=57))	//Encrypt the Numbers
			{
				i=4;
				mod=num[ch+i];
				fout<<mod;
			}

			if((ch==10)||(ch==13))	//For enter key
            {
				mod=ch;
				fout<<mod;
			}

			if(ch==32)				//For space key
				fout<<ch;

			if(ch==9)				//For tab key
				fout<<ch;

			if((ch>=33)&&(ch<=47))	//For special symbols
			{
				mod=ch+64;
				fout<<mod;
			}

			if((ch>=58)&&(ch<=64))	//For special symbols
			{
				mod=ch+54;
				fout<<mod;
			}

			if((ch>=91)&&(ch<=96))	//For special symbols
			{
				mod=ch+28;
				fout<<mod;
			}

			if((ch>=123)&&(ch<=126))	//For special symbols
			{
				mod=ch-40;
				fout<<mod;
			}
		}

		fin.close();                                          //Close The Input File
		fout.close();                                         //Close The Output File
		cout << "Your File Is Encrypted Now........... ";
	}

	if(option==2)
	{
		int flag=1;

		cout << "Enter the name of the file which is to be Decrypted: ";
		cin >> name;

		ifstream fin(name,ios::binary);    //Open the input file in a Binary Mode
		if(!fin)
		{
			cout<<"Error in opening a file!";
			return 1;
		}

		cout << "Enter the name of New Decrypted File Name: ";
		cin >> target;

		ofstream fout(target,ios::binary);  //Open The OutPut File In A Binary Mode
		if(!fout)
		{
			cout<<"Error in opening of Target File : ";
			return 1;
		}

		for(i=0;i<9;i++)
		{
			num[i]=i;
		}

		for(i=14;i<31;i++)
		{
			num[i-5]=i;
		}

		for(i=33;i<=68;i++)
		{
			num[i-7]=i;
		}

		for(i=97;i<=122;i++)
		{
			num[i-35]=i;
		}

		while(fin.get(ch))
		{
			//fin.get(ch);
			flag = 0;
			//if(ch == EOF) break;

			for(i=26;i<52;i++)
			{
				if(ch==num[i])
				{
					mod=i+39;
					fout<<mod;
					flag=1;
					break;
				}
			 }

			if (flag==1) continue ;

			for(i=0;i<26;i++)
			{
				if(ch==num[i])
				{
					mod=i+97;
					fout<<mod;
					flag=1;
					break;
				}
			 }

			if (flag==1) continue ;

			for(i=52;i<62;i++)
			{
				if(ch==num[i])
				{
					mod=i-4;
					fout<<mod;
					flag=1;
					break ;
				}
			}

			if (flag==1) continue ;

			if((ch==10)||(ch==13))
			{
				mod=ch;
				fout<<mod;
			}

			if(ch==32)
				fout<<ch;

			if(ch==9)
				fout<<ch;

			if((ch>=97)&&(ch<=111))
			{
				mod=ch-64;
				fout<<mod;
			}

			if((ch>=112)&&(ch<=118))
			{
				mod=ch-54;
				fout<<mod;
			}

			if((ch>=119)&&(ch<=124))
			{
				mod=ch-28;
				fout<<mod;
			}

			if((ch>=83)&&(ch<=86))
			{
				mod=ch+40;
				fout<<mod;
			}

		}

		fin.close();
		fout.close();

		cout<<"The File Is Being Decrypted............ ";
	}
	return 0;
}


