/*** FILE #1: Header file or Fraction Class
	* Program Name		cisFraction.h
	* Written By:		Marcus Larsson
	* Date Written:	11/09/2011
	*/

#ifndef CISFRACTION_H
#define CISFRACTION_H

#include <iostream>
using namespace std;

class Fraction {
public:
	// Constructors
	Fraction();
	Fraction(const Fraction & arg);
	Fraction(int arg1, int arg2);

	//Destructor
	~Fraction();

	// Accessors
	int getNum();
	int getDenom();

	// Mutators
	void setNum(int arg);
	void setDenom(int arg);

	// Declared friend functions
	friend Fraction operator+(const Fraction & arg1, const Fraction & arg2);
	friend Fraction operator-(const Fraction & arg1, const Fraction & arg2);
	friend Fraction operator*(const Fraction & arg1, const Fraction & arg2);
	friend Fraction operator/(const Fraction & arg1, const Fraction & arg2);

	// Finding the GCD with Euclid's algorithm and reducing the fraction
	void reduce(int arg1, int arg2);

private:
	int iNum;
	int iDenom;
};

// Stand-alone functions
Fraction operator+(const Fraction & arg1, const Fraction & arg2);
Fraction operator-(const Fraction & arg1, const Fraction & arg2);
Fraction operator*(const Fraction & arg1, const Fraction & arg2);
Fraction operator/(const Fraction & arg1, const Fraction & arg2);

#endif