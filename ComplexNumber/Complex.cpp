/*
 * Complex.cpp
 *
 *  Created on: Jun 3, 2013
 *      Author: nirav.chotai
 */
//Implementation for complex class
#include <iostream>
#include "Complex.h"
using namespace std;

//Constructor
Complex::Complex(double real, double imag)
:real(real),imag(imag){

}

double Complex::getReal() const{
	return real;
}

void Complex::setReal(double real){
	this->real = real;
}

double Complex::getImag() const{
	return imag;
}

void Complex::setImag(double imag){
	this->imag = imag;
}

void Complex::setValue(double real, double imag){
	this->real = real;
	this->imag = imag;
}

//printing in the format of x+iy
void Complex::print() const{
	cout << "( " << real << " + i" << imag << " )" << endl;
}

bool Complex::isReal() const{
	return (imag==0);
}

bool Complex::isImaginary() const{
	return (real==0);
}

//Add the given complex instance into this one
//and return this instance by reference
Complex & Complex::addInto(const Complex & another){
	real += another.real;
	imag += another.imag;
	return *this;
}

Complex & Complex::addInto(double real, double imag){
	this->real += real;
	this->imag += imag;
	return *this;
}

//Add the given complex instance and this one
//and return sum in a new instance by value
Complex Complex::addReturnNew(const Complex & another) const{
	return Complex(real + another.real, imag + another.imag);
}

Complex Complex::addReturnNew(double real, double imag) const{
	return (this->real + real, this->imag + imag);
}

