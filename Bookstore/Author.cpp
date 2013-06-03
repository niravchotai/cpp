/*
 * Author.cpp
 *
 *  Created on: Jun 2, 2013
 *      Author: nirav.chotai
 */
//Implementation file for Author
#include <iostream>
#include "Author.h"
using namespace std;

//Constructor with input validation
Author::Author(string name, string email, char gender)
{
	this->name = name;
	setEmail(email);	//call setter to check email validation

	if(gender == 'm' || gender == 'f')
	{
		this->gender = gender;
	}
	else
	{
		cout << "Invalid gender! Set to 'u' (unknown)." << endl;
		this->gender = 'u';
	}
}

string Author::getName() const
{
	return name;
}

string Author::getEmail() const
{
	return email;
}

void Author::setEmail(string email)
{
	size_t atIndex = email.find('@');
	if(atIndex != string::npos && atIndex != 0 && atIndex != email.length()-1)
	{
		this->email = email;
	}
	else
	{
		cout << "Invalid email..! Set to home." << endl;
		this->email = "home";
	}
}

char Author::getGender() const
{
	return gender;
}

//Print in the format "Nirav chotai (m) at niravchotai@in.com"
void Author::print() const
{
	cout << name << " (" << gender << ") at " << email << endl;
}















