/*
 * MyComplex.h
 *
 *  Created on: Jun 26, 2013
 *      Author: nirav.chotai
 */
//Header file
//All template codes are kept in the header, to be included in program

#ifndef MYCOMPLEX_H_
#define MYCOMPLEX_H_

#include <iostream>

//Forward Declaration
template <typename T> class MyComplex;

template <typename T>
std::ostream & operator<< (std::ostream & out, const MyComplex<T> & c);
template <typename T>
std::istream & operator>> (std::istream & in, MyComplex<T> & c);

//MyComplex template class declaration
template <typename T>
class MyComplex{
private:
	T real, imag;
public:
	//Constructor
	explicit MyComplex<T> (T real = 0, T imag = 0)
	:real(real), imag(imag){ }

	// Overload += operator for c1 += c2
	MyComplex<T> & operator+= (const MyComplex<T> & rhs)
	{
	      real += rhs.real;
	      imag += rhs.imag;
	      return *this;
	}

	// Overload += operator for c1 += value
	MyComplex<T> & operator+= (T value)
	{
	      real += value;
	      return *this;
	}

	// Overload comparison == operator for c1 == c2
	bool operator== (const MyComplex<T> & rhs) const {
		return (real == rhs.real && imag == rhs.imag);
	}

	// Overload comparison != operator for c1 != c2
	bool operator!= (const MyComplex<T> & rhs) const {
		return !(*this == rhs);
	}

	 // Overload prefix increment operator ++c
	 MyComplex<T> & operator++ ();

	 // Overload postfix increment operator c++
	 const MyComplex<T> operator++ (int dummy);

	 //Friends

	 friend std::ostream & operator<< <>(std::ostream & out, const MyComplex<T> & c); // out << c
	 friend std::istream & operator>> <>(std::istream & in, MyComplex<T> & c);        // in >> c

	 // Overloading + operator for c1 + c2
	 friend const MyComplex<T> operator+ (const MyComplex<T> & lhs, const MyComplex<T> & rhs) {
	       MyComplex<T> result(lhs);
	       result += rhs;  // uses overload +=
	       return result;
	 }

	 // Overloading + operator for c + double
	 friend const MyComplex<T> operator+ (const MyComplex<T> & lhs, T value) {
	       MyComplex<T> result(lhs);
	       result += value;  // uses overload +=
	       return result;
	 }

	 // Overloading + operator for double + c
	 friend const MyComplex<T> operator+ (T value, const MyComplex<T> & rhs) {
	       return rhs + value;   // swap and use above function
	 }
};

// Overload prefix increment operator ++c
template <typename T>
MyComplex<T> & MyComplex<T>::operator++ () {
  ++real;   // increment real part only
  return *this;
}

// Overload postfix increment operator c++
template <typename T>
const MyComplex<T> MyComplex<T>::operator++ (int dummy) {
   MyComplex<T> saved(*this);
   ++real;  // increment real part only
   return saved;
}

// Overload stream insertion operator out << c (friend)
template <typename T>
std::ostream & operator<< (std::ostream & out, const MyComplex<T> & c) {
   out << '(' << c.real << ',' << c.imag << ')';
   return out;
}

// Overload stream extraction operator in >> c (friend)
template <typename T>
std::istream & operator>> (std::istream & in, MyComplex<T> & c) {
   T inReal, inImag;
   char inChar;
   bool validInput = false;
   // Input shall be in the format "(real,imag)"
   in >> inChar;
   if (inChar == '(') {
      in >> inReal >> inChar;
      if (inChar == ',') {
         in >> inImag >> inChar;
         if (inChar == ')') {
            c = MyComplex<T>(inReal, inImag);
            validInput = true;
         }
      }
   }
   if (!validInput) in.setstate(std::ios_base::failbit);
   return in;
}

#endif /* MYCOMPLEX_H_ */
