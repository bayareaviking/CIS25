/*** Implementation file for the MarcusFraction class
	* Program Name:	cisMarcusFraction.cpp
	* Written By:		Marcus Larsson
	* Date Written:	11/09/2011
	*/
#include <iostream>
#include "MarcusFraction.h"
using namespace std;
// Constructors
MarcusFraction::MarcusFraction() {
	iNum = 0;
	iDenom = 1;
}
MarcusFraction::MarcusFraction(const MarcusFraction & arg) {
	iNum = arg.iNum;
	iDenom = arg.iDenom;
}
MarcusFraction::MarcusFraction(int arg) {
	iNum = arg;
	iDenom = 1;
}
MarcusFraction::MarcusFraction(int arg1, int arg2) {
	iNum = arg1;
	if (arg2) {
		iDenom = arg2;
	} else {
		iDenom = 1;
		iNum = 0;
	}
	if (iDenom < 0) {
		iDenom *= -1;
		iNum *= -1;
	}
	reduce(arg1, arg2);
}
MarcusFraction::~MarcusFraction() {
	//cout << "MarcusFraction Destructor" << endl;
}
// Accessors
int MarcusFraction::getNum() {
	return iNum;
}
int MarcusFraction::getDenom() {
	return iDenom;
}
// Mutators
void MarcusFraction::setNum(int arg) {
	iNum = arg;
	return;
}
void MarcusFraction::setDenom(int arg) {
	if (arg) {
		iDenom = arg;
	} else {
		iDenom = 1;
	}
	if (iDenom < 0) {
		iDenom *= -1;
		iNum *= -1;
	}
}
void MarcusFraction::setFrac(int arg1, int arg2) {
	setNum(arg1);
	setDenom(arg2);
}
void MarcusFraction::setFrac(int arg) {
	setNum(arg);
	setDenom(1);
}
// Finding the GCD with Euclid's algorithm and reducing the MarcusFraction
void MarcusFraction::reduce(int arg1, int arg2) {
	int x;
	int y;
	int z;

	x = arg1;
	y = arg2;

	while ( y != 0 ) {
		z = x % y;
		x = y;
		y = z;
	}

	if (x < 0) {
		x *= -1;
	}

	iNum /= x;
	iDenom /= x;
return;
}
void MarcusFraction::operator=(const MarcusFraction & arg) {
	iNum = arg.iNum;
	iDenom = arg.iDenom;
	return;
}
void MarcusFraction::operator=(const int & arg) {
	iNum = arg;
	iDenom = 1;
}

// Stand-alone functions
MarcusFraction operator+(const MarcusFraction & arg1, const MarcusFraction & arg2) {
	return MarcusFraction((arg1.iNum * arg2.iDenom) + (arg2.iNum * arg1.iDenom), arg1.iDenom * arg2.iDenom);
}
MarcusFraction operator-(const MarcusFraction & arg1, const MarcusFraction & arg2) {
	return MarcusFraction((arg1.iNum * arg2.iDenom) - (arg2.iNum * arg1.iDenom), arg1.iDenom * arg2.iDenom);
}
MarcusFraction operator*(const MarcusFraction & arg1, const MarcusFraction & arg2) {
	return MarcusFraction(arg1.iNum * arg2.iNum, arg1.iDenom * arg2.iDenom);
}
MarcusFraction operator/(const MarcusFraction & arg1, const MarcusFraction & arg2) {
	return MarcusFraction(arg1.iNum * arg2.iDenom, arg1.iDenom * arg2.iNum);
}

MarcusFraction operator+(const MarcusFraction & arg1, const int & arg2) {
	return MarcusFraction((arg1.iNum) + (arg2 * arg1.iDenom), arg1.iDenom);
}
MarcusFraction operator-(const MarcusFraction & arg1, const int & arg2) {
	return MarcusFraction((arg1.iNum) - (arg2 * arg1.iDenom), arg1.iDenom);
}
MarcusFraction operator*(const MarcusFraction & arg1, const int & arg2) {
	return MarcusFraction(arg1.iNum * arg2, arg1.iDenom);
}
MarcusFraction operator/(const MarcusFraction & arg1, const int & arg2) {
	return MarcusFraction(arg1.iNum, arg1.iDenom * arg2);
}


MarcusFraction operator+(const int & arg1, const MarcusFraction & arg2) {
	return MarcusFraction((arg1 * arg2.iDenom) + (arg2.iNum), arg2.iDenom);
}
MarcusFraction operator-(const int & arg1, const MarcusFraction & arg2) {
	return MarcusFraction((arg1 * arg2.iDenom) - (arg2.iNum), arg2.iDenom);
}
MarcusFraction operator*(const int & arg1, const MarcusFraction & arg2) {
	return MarcusFraction(arg1 * arg2.iNum, arg2.iDenom);
}
MarcusFraction operator/(const int & arg1, const MarcusFraction & arg2) {
	return MarcusFraction(arg1 * arg2.iDenom, arg2.iNum);
}

bool operator<(const MarcusFraction & arg1, const MarcusFraction & arg2) {
	int num1;
	int num2;
	bool temp;

	num1 = (arg1.iNum * arg2.iDenom);
	num2 = (arg2.iNum * arg1.iDenom);

	if (num1 < num2) {
		temp = 1;
	} else {
		temp = 0;
	}

	return temp;
}
int operator>(const MarcusFraction & arg1, const MarcusFraction & arg2) {
	int num1;
	int num2;
	bool temp;

	num1 = (arg1.iNum * arg2.iDenom);
	num2 = (arg2.iNum * arg1.iDenom);

	if (num1 > num2) {
		temp = 1;
	} else {
		temp = 0;
	}

	return temp;
}

ostream& operator<<(ostream & arg1, const MarcusFraction & arg2) {
	if (arg2.iDenom == 1) {
		arg1 << arg2.iNum;
	} else {
		arg1 << arg2.iNum << "/" << arg2.iDenom;
	}
	return arg1;
}