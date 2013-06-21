/*
 * Date.h
 *
 *  Created on: Jun 8, 2013
 *      Author: nirav.chotai
 */
//Header file for date class

#ifndef DATE_H_
#define DATE_H_

#include <string>
using namespace std;

class Date{
private:
	int year;	//17xx-99xx
	int month;	//1-12
	int day;	//1-31

	const static string STR_MONTHS[];
	const static string STR_DAYS[];
	const static int DAYS_IN_MONTHS[];
	const static int YEAR_MIN = 1700;
	const static int YEAR_MAX = 9999;

public:
	static bool isLeapYear(int y);
	static bool isValidDate(int y, int m, int d);
	static int getDayOfWeek(int y, int m, int d);

	Date(int y, int m, int d);

	void setDate(int y, int m, int d);

	int getYear() const;
	int getMonth() const;
	int getDay() const;

	void setYear(int y);
	void setMonth(int m);
	void setDay(int d);

	void print() const;

	Date & nextDay();
	Date & previousDay();
	Date & nextMonth();
	Date & previousMonth();
	Date & nextYear();
	Date & previousYear();

};

#endif /* DATE_H_ */
