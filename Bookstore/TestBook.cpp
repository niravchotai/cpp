/*
 * TestBook.cpp
 *
 *  Created on: Jun 2, 2013
 *      Author: nirav.chotai
 */
//Test file for Book class
#include <iostream>
#include "Book.h"
using namespace std;

int main()
{
	Author nirav("Nirav Chotai", "niravchotai@in.com" , 'm');
	nirav.print();

	Book cpp("C++ with OOP", nirav, 50);
	cpp.setQtyInStock(100);
	cpp.print();

	cout << "Author name: " << cpp.getAuthor().getName() << endl;
	cout << "Author email: " <<cpp.getAuthor().getEmail() << endl;
	cout << "Author name: " << cpp.getAuthorName() << endl;

	cout << "Price: " << cpp.getPrice() << endl;
	cout << "Stock: " << cpp.getQtyInStock() << endl;

	cpp.setPrice(-10);
	cpp.setQtyInStock(-10);

	return 0;
}


