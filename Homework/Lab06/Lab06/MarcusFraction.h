/*** FILE #1: Header file or MarcusFraction Class
	* Program Name		cisMarcusFraction.h
	* Written By:		Marcus Larsson
	* Date Written:	11/09/2011
	*/

#ifndef MARCUSFRACTION_H
#define MARCUSFRACTION_H

#include <iostream>
using namespace std;

class MarcusFraction {
public:
	// Constructors
	MarcusFraction();
	MarcusFraction(const MarcusFraction & arg);
	MarcusFraction(int arg1, int arg2);

	//Destructor
	~MarcusFraction();

	// Accessors
	int getNum();
	int getDenom();

	// Mutators
	void setNum(int arg);
	void setDenom(int arg);

	// Declared friend functions
	friend MarcusFraction operator+(const MarcusFraction & arg1, const MarcusFraction & arg2);
	friend MarcusFraction operator-(const MarcusFraction & arg1, const MarcusFraction & arg2);
	friend MarcusFraction operator*(const MarcusFraction & arg1, const MarcusFraction & arg2);
	friend MarcusFraction operator/(const MarcusFraction & arg1, const MarcusFraction & arg2);
	friend ostream& operator<<(ostream & arg1, const MarcusFraction & arg2);

	// Finding the GCD with Euclid's algorithm and reducing the MarcusFraction
	void reduce(int arg1, int arg2);

	// Other Member Functions
	void operator=(const MarcusFraction & arg);

private:
	int iNum;
	int iDenom;
};

// Stand-alone functions
MarcusFraction operator+(const MarcusFraction & arg1, const MarcusFraction & arg2);
MarcusFraction operator-(const MarcusFraction & arg1, const MarcusFraction & arg2);
MarcusFraction operator*(const MarcusFraction & arg1, const MarcusFraction & arg2);
MarcusFraction operator/(const MarcusFraction & arg1, const MarcusFraction & arg2);
ostream& operator<<(ostream & arg1, const MarcusFraction & arg2);

#endif