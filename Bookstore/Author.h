/*
 * Author.h
 *
 *  Created on: Jun 2, 2013
 *      Author: nirav.chotai
 */
//Header File for Author
#ifndef AUTHOR_H_
#define AUTHOR_H_

#include <string>
using namespace std;

class Author
{
private:
	string name;	//Nirav Chotai
	string email;	//niravchotai@in.com
	char gender;	//m
public:
	Author(string name, string email, char gender);

	string getName() const;

	string getEmail() const;
	void setEmail(string email);

	char getGender() const;

	void print() const;
};

#endif /* AUTHOR_H_ */
