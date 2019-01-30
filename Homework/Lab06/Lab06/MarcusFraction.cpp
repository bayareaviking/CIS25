/*** File #2: Implementation file for the MarcusFraction class
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
MarcusFraction::MarcusFraction(int arg1, int arg2) {
	iNum = arg1;
	if (arg2) {
		iDenom = arg2;
	} else {
		iDenom = 1;
	}
	if (iDenom < 0) {
		iDenom *= -1;
		iNum *= -1;
	}
	reduce(arg1, arg2);
}
MarcusFraction::~MarcusFraction() {
	cout << "Look Ma, I'm the Economy! (Destructor call.)" << endl;
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
ostream& operator<<(ostream & arg1, const MarcusFraction & arg2) {
	arg1 << arg2.iNum << "/" << arg2.iDenom;
	return arg1;
}