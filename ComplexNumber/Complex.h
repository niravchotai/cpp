/*
 * Complex.h
 *
 *  Created on: Jun 3, 2013
 *      Author: nirav.chotai
 */
//Header file for complex class
#ifndef COMPLEX_H_
#define COMPLEX_H_

class Complex
{
private:
	double real;
	double imag;
public:
	Complex(double real=0.0, double imag=0.0);

	double getReal() const;
	void setReal(double real);

	double getImag() const;
	void setImag(double imag);

	void setValue(double real, double imag);

	void print() const;

	bool isReal() const;
	bool isImaginary() const;

	//Add the given complex instance into this one
	//and return this instance by reference
	Complex &addInto(const Complex &another);
	Complex &addInto(double real, double imag);

	//Add the given complext instance and this one
	//and return sum in a new instance by value
	Complex addReturnNew(const Complex &another) const;
	Complex addReturnNew(double real, double imag) const;

};


#endif /* COMPLEX_H_ */
