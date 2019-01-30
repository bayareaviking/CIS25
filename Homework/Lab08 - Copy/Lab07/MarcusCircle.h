/*** Header file or MarcusCircle Class
	* Program Name		MarcusCircle.h
	* Written By:		Marcus Larsson
	* Date Written:	11/29/2011
	*/

#ifndef MARCUSCIRCLE_H
#define MARCUSCIRCLE_H

#include "MarcusPoint.h"

class MarcusCircle {
public:
	MarcusCircle();
	MarcusCircle(const MarcusCircle & arg);
	MarcusCircle(const MarcusPoint & arg1, const MarcusFraction & arg2);

	~MarcusCircle();

	MarcusPoint getCenter() const ;
	MarcusFraction getRadius() const ;
	MarcusFraction getArea() const ;
	MarcusFraction getCircumference() const ;
	void setCenter(const MarcusPoint & arg);
	void setCenter(const MarcusFraction & arg1, const MarcusFraction & arg2);
	void setRadius(const MarcusFraction & arg);

	void print();

	void operator=(const MarcusCircle & arg);

	friend bool operator<(const MarcusCircle & arg1, const MarcusCircle & arg2);
	friend bool operator>(const MarcusCircle & arg1, const MarcusCircle & arg2);
	friend MarcusCircle operator+(const MarcusCircle & arg1, const MarcusCircle & arg2);


private:
	MarcusPoint center;
	MarcusFraction radius;
};

bool operator<(const MarcusCircle & arg1, const MarcusCircle & arg2);
bool operator>(const MarcusCircle & arg1, const MarcusCircle & arg2);
MarcusCircle operator+(const MarcusCircle & arg1, const MarcusCircle & arg2);

#endif