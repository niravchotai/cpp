/*
 * TestOprOverload.cpp
 *
 *  Created on: Apr 21, 2013
 *      Author: ispluser
 */
#include <iostream>
using namespace std;
class Point{
	//Friend functions
	//Overload operators << and >>
	//Stream insertion
	friend ostream& operator<<(ostream& out, const Point& rPoint);
	//Stream extraction
	friend istream& operator>>(istream& in, Point& rPoint);
private:
	int x, y;
public:
	Point(const int x=0, const int y=0){
		this->x = x;
		this->y = y;
	}
};

//Friend functions
ostream& operator<<(ostream& out, const Point& rPoint){
	out << "(" << rPoint.x << " , " << rPoint.y << ")";
	return out;
}
istream& operator>>(istream& in, Point& rPoint){
	cout << "Enter x and y co-ordinates: ";
	in >> rPoint.x >> rPoint.y;
	return in;
}

int main(){
	Point p1(5, 6);
	cout << p1 << endl;

	operator<<(cout, p1);
	cout << endl;

	cin >> p1;
	cout << p1 << endl;
}

