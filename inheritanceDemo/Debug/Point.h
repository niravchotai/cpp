/*
 * Point.h
 *
 *  Created on: 14-Apr-2013
 *      Author: nirav.chotai
 */

//Header file
#ifndef POINT_H_
#define POINT_H_

//class declaration
class Point{
private:
	int x, y, z;	//private data members
public:
	//constructors with default arguments
	Point(const int x=0, const int y=0, const int z=0);

	//Getters
	int getX() const;
	int getY() const;
	int getZ() const;

	//Setters
	void setX(const int x);
	void setY(const int y);
	void setZ(const int z);

	void print() const;		//public member function
};

#endif /* POINT_H_ */
