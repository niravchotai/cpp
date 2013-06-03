/*
 * Book.h
 *
 *  Created on: Jun 2, 2013
 *      Author: nirav.chotai
 */
//Header file for Book class

#ifndef BOOK_H_
#define BOOK_H_

#include <string>
#include "Author.h"
using namespace std;

class Book
{
private:
	string name;
	Author author;
	double price;
	int qtyInStock;

public:
	Book(string name, Author author, double price, int qtyInStock=0);

	string getName() const;
	Author getAuthor() const;

	double getPrice() const;
	void setPrice(double price);

	int getQtyInStock() const;
	void setQtyInStock(int qtyInStock);

	void print() const;

	string getAuthorName() const;
};


#endif /* BOOK_H_ */
