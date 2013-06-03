/*
 * Book.cpp
 *
 *  Created on: Jun 2, 2013
 *      Author: nirav.chotai
 */
//Implementation file for Book class

#include <iostream>
#include "Book.h"
using namespace std;

//Constructor
Book::Book(string name, Author author, double price, int qtyInStock)
:author(author){
	this->name = name;
	//call setters for validation of price and stock
	setPrice(price);
	setQtyInStock(qtyInStock);
}

string Book::getName() const
{
	return name;
}

Author Book::getAuthor() const
{
	return author;
}

double Book::getPrice() const
{
	return price;
}

void Book::setPrice(double price)
{
	//validate price
	if(price > 0)
	{
		this->price = price;
	}
	else
	{
		cout << "Price should be positive. Set to 0" << endl;
		this->price = 0;
	}
}

int Book::getQtyInStock() const
{
	return qtyInStock;
}

void Book::setQtyInStock(int qtyInStock)
{
	//validate stock
	if(qtyInStock >= 0)
	{
		this->qtyInStock = qtyInStock;
	}
	else
	{
		cout << "Stock cannot be negative. Set to 0" << endl;
		this->qtyInStock = 0;
	}
}

void Book::print() const
{
	cout << "'" << name << "' by ";
	author.print();
}

//Return the author's name for this book
string Book::getAuthorName() const
{
	return author.getName();
}
