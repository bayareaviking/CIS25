/*** Header file or MarcusRectangle Class
	* Program Name		MarcusRecangle.h
	* Written By:		Marcus Larsson
	* Date Written:	11/29/2011
	*/

#ifndef MARCUSRECTANGLE_H
#define MARCUSRECTANGLE_H

#include "MarcusPoint.h"

class MarcusRectangle {
public:
	MarcusRectangle();
	MarcusRectangle(const MarcusRectangle & arg);
	MarcusRectangle(const MarcusFraction & arg1, const MarcusFraction & arg2, const MarcusPoint & arg3);

	~MarcusRectangle();

	void setLength(const MarcusFraction & arg);
	void setWidth(const MarcusFraction & arg);
	void setLowerLeft(const MarcusPoint & arg);
	void setLowerLeft(const MarcusFraction & arg1, const MarcusFraction & arg2);
	MarcusFraction getLength() const ;
	MarcusFraction getWidth() const ;
	MarcusPoint getLowerLeft() const ;
	void print();

	friend bool operator<(const MarcusRectangle & arg1, const MarcusRectangle & arg2);
	friend bool operator>(const MarcusRectangle & arg1, const MarcusRectangle & arg2);

	MarcusFraction getArea() const ;
	MarcusFraction getPerimeter() const ;

	void operator=(const MarcusRectangle & arg);

private:
	MarcusPoint lowerLeft;
	MarcusFraction length;
	MarcusFraction width;
};

bool operator<(const MarcusRectangle & arg1, const MarcusRectangle & arg2);
bool operator>(const MarcusRectangle & arg1, const MarcusRectangle & arg2);

#endif