/*
 * TestStringOverloadOpr.cpp
 *
 *  Created on: Apr 21, 2013
 *      Author: ispluser
 */
/* Test Overloaded Operator in string class */
#include <iostream>
#include <iomanip>
#include <string>    // needed to use the string class
using namespace std;

int main() {
   string msg1 = "hello";
   string msg2 = "HELLO";
   string msg3;
   cout << "Example: " << endl;
   msg3 = msg1 + msg2;
   cout << msg3 << endl;
   // Comparison
   cout << boolalpha;
   cout << (msg1 == msg2) << endl;  // false
   cout << (msg1 == msg3) << endl;  // false
   cout << (msg1 != msg2) << endl;  // true

   // Concatenation
   cout << (msg1 + " " + msg2) << endl;  // hello HELLO

   // Indexing
   cout << msg1[1] << endl;     // 'e'
   cout << msg1[99] << endl;    // garbage
   cout << msg1.at(99) << endl; // out_of_range exception
}



