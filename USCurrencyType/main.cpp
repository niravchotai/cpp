/*
 * main.cpp
 *
 *  Created on: Apr 22, 2013
 *      Author: ispluser
 */
#include <iostream>
using namespace std;

class USCurrency {
private:
	int dollars;
	int cents;
public:
	friend ostream& operator<<(ostream& out, const USCurrency &o);
	USCurrency(const int cents=0, const int dollars=0){
		this->cents = cents;
		this->dollars = dollars;
	}
	USCurrency operator+(const USCurrency &o){
		USCurrency tmp;
		tmp.cents = cents + o.cents;
		tmp.dollars = dollars + o.dollars;
		if(tmp.cents>=100){
			tmp.dollars+=1;
			tmp.cents-=100;
		}
		return tmp;
	}
};
ostream& operator<<(ostream &out, const USCurrency &o){
	out << "$" << o.dollars << "." << o.cents;
	return out;
}
int main(){

	USCurrency a(50, 2);
	cout << a << endl;
	USCurrency b(75, 1);
	cout << b << endl;
	USCurrency c = a + b;
	cout << c << endl;

	return 0;
}


