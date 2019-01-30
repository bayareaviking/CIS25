/*** Header file or MarcusPoint Class
	* Program Name		MarcusPoint.h
	* Written By:		Marcus Larsson
	* Date Written:	11/26/2011
	*/
#ifndef MARCUSPOINT_H
#define MARCUSPOINT_H

#include "MarcusFraction.h"

class MarcusPoint {
public:
	MarcusPoint();
	MarcusPoint(const MarcusPoint & arg);
	MarcusPoint(const MarcusFraction & arg1, const MarcusFraction & arg2);

	~MarcusPoint();

	void setX(const MarcusFraction & arg);
	void setY(const MarcusFraction & arg);
	void setPoint(const MarcusFraction & arg1, const MarcusFraction & arg2);
	MarcusFraction getX();
	MarcusFraction getY();
	void moveBy(const MarcusFraction & arg1, const MarcusFraction & arg2);
	void moveBy(const MarcusFraction & arg);
	void flipByX();
	void flipByY();
	void flipThroughOrigin();

	void print();

	friend ostream& operator<<(ostream & arg1, const MarcusPoint & arg2);
	friend MarcusPoint getMidPoint(const MarcusPoint & arg1, const MarcusPoint & arg2);

	void operator=(const MarcusPoint & arg);

private:
	MarcusFraction x;
	MarcusFraction y;
};

ostream& operator<<(ostream & arg1, const MarcusPoint & arg2);
MarcusPoint getMidPoint(const MarcusPoint & arg1, const MarcusPoint & arg2);

#endif