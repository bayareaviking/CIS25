/*** Header file or MarcusCylinder Class
	* Program Name		MarcusCylinder.h
	* Written By:		Marcus Larsson
	* Date Written:	11/29/2011
	*/

#ifndef MARCUSCYLINDER_H
#define MARCUSCYLINDER_H

#include "MarcusCircle.h"

class MarcusCylinder : public MarcusCircle {
public:
	MarcusCylinder();
	MarcusCylinder(const MarcusCylinder & arg);
	MarcusCylinder(const MarcusCircle & arg1, const MarcusFraction & arg2);

	~MarcusCylinder();

	void setHeight(const MarcusFraction & arg);
	void setBase(const MarcusCircle & arg);
	MarcusFraction getHeight() const ;
	MarcusFraction getVolume() const ;
	MarcusFraction getSurfaceArea() const ;

	void print();

	void operator=(const MarcusCylinder & arg);

	friend bool operator<(const MarcusCylinder & arg1, const MarcusCylinder & arg2);
	friend bool operator>(const MarcusCylinder & arg1, const MarcusCylinder & arg2);
	friend MarcusCylinder operator+(const MarcusCylinder & arg1, const MarcusCylinder & arg2);



private:
	MarcusFraction height;
};

bool operator<(const MarcusCylinder & arg1, const MarcusCylinder & arg2);
bool operator>(const MarcusCylinder & arg1, const MarcusCylinder & arg2);
MarcusCylinder operator+(const MarcusCylinder & arg1, const MarcusCylinder & arg2);

#endif