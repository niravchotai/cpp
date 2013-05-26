/*
 * point.h
 *
 *  Created on: 14-Apr-2013
 *      Author: nirav.chotai
 */

#ifndef POINT_H_
#define POINT_H_


class point
{
private:
	int x, y,z; //data members

public:

	point(const int x = 0, const int y = 0, const int z = 0);  //constructor

	//getters
	int getX() const;
	int getY() const;
	int getZ() const;

	//setters
	void setX(const int x);
	void setY(const int y);
	void setZ(const int z);

	void print() const;

	};




#endif /* POINT_H_ */
