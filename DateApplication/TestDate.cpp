/*
 * TestDate.cpp
 *
 *  Created on: Jun 17, 2013
 *      Author: nirav.chotai
 */
//Test driver program for date class
#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;

int main()
{
	Date d1(2013, 6, 21);
	d1.print();				//Friday, 21 Jun 2013
	d1.nextDay().print();	//Saturday, 22 Jun 2013
	d1.print();				//Saturday, 22 Jun 2013

	d1.setDate(2012, 2, 29);	//Feb, leap year
	d1.print();					//Wednesday, 29 Feb 2012
	d1.nextDay().print();		//Thursday, 1 Mar 2012

	d1.setDate(2013, 12, 31);
	d1.print();					//Tuesday, 31 Dec 2013
	d1.nextDay().print();		//Wednesday, 1 Jan 2014

	//Date d2(2011, 2, 29);		//termination...!!!
	//d2.print();

	try{		//handling through exception
		Date d3(2011, 2, 29);
		d3.print();
	}catch(invalid_argument &ex){
		cout << ex.what() << endl;	//Error: Invalid day (1-28|29|30|31)!
	}
	cout << "Next statement after try-catch" << endl;

	try{	//handling exception
		Date d4(9999,12,30);
		d4.nextDay().print();	//Friday, 31 Dec 9999
		d4.nextDay();
		d4.print();
	}catch(out_of_range &ex){
		cout << ex.what() << endl;	//Error: Next day is out of range!
	}

	Date d5(2012, 1, 1);
	d5.previousDay().print();	//Saturday, 31 Dec 2011

	Date d6(2012, 3, 31);
	d6.nextMonth().print();		//Monday, 30 Apr 2012

	Date d7(2012, 3, 31);
	d7.previousMonth().print();		//Wednesday, 29 Feb 2012

	Date d8(2012, 2, 29);
	d8.nextYear().print();		//Thursday, 28 Feb 2013

	Date d9(2012, 2, 29);
	d9.previousYear().print();	//Monday, 28 Feb 2011

	return 0;
}



