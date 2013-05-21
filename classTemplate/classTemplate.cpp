/*
 * classTemplate.cpp
 *
 *  Created on: May 4, 2013
 *      Author: nirav.chotai
 */
//Example of class template
#include <iostream>
using namespace std;

template <typename T>
class Point{
private:
	T x, y;
public:
	Point(const T a, const T b) : x(a), y(b){}

	T getX(){
		return x;
	}
	T getY(){
		return y;
	}
};
int main(){
	Point<char> fpoint('a', 'b');
	cout << fpoint.getX() << " , " << fpoint.getY() << endl;
	return 0;
}



