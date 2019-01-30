/*** File #2: Implementation file for the Fraction class
	* Program Name:	cisFraction.cpp
	* Written By:		Marcus Larsson
	* Date Written:	11/09/2011
	*/
#include <iostream>
#include "cisFraction.h"
using namespace std;

	Fraction::Fraction() {
		iNum = 0;
		iDenom = 1;
	}
	Fraction::Fraction(const Fraction & arg) {
		iNum = arg.iNum;
		iDenom = arg.iDenom;
	}
	Fraction::Fraction(int arg1, int arg2) {
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
	Fraction::~Fraction() {
		cout << "Look Ma, I'm the Economy!" << endl;
	}
	// Accessors
	int Fraction::getNum() {
		return iNum;
	}
	int Fraction::getDenom() {
		return iDenom;
	}
	// Mutators
	void Fraction::setNum(int arg) {
		iNum = arg;
		return;
	}
	void Fraction::setDenom(int arg) {
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

	void Fraction::reduce(int arg1, int arg2) {
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


// Stand-alone functions
Fraction operator+(const Fraction & arg1, const Fraction & arg2) {
	return Fraction((arg1.iNum * arg2.iDenom) + (arg2.iNum * arg1.iDenom), arg1.iDenom * arg2.iDenom);
}
Fraction operator-(const Fraction & arg1, const Fraction & arg2) {
	return Fraction((arg1.iNum * arg2.iDenom) - (arg2.iNum * arg1.iDenom), arg1.iDenom * arg2.iDenom);
}
Fraction operator*(const Fraction & arg1, const Fraction & arg2) {
	return Fraction(arg1.iNum * arg2.iNum, arg1.iDenom * arg2.iDenom);
}
Fraction operator/(const Fraction & arg1, const Fraction & arg2) {
	return Fraction(arg1.iNum * arg2.iDenom, arg1.iDenom * arg2.iNum);
}