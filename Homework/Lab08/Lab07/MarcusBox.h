/*** Header file or MarcusBox Class
	* Program Name		MarcusBox.h
	* Written By:		Marcus Larsson
	* Date Written:	11/29/2011
	*/

#ifndef MARCUSBOX_H
#define MARCUSBOX_H

#include "MarcusRectangle.h"

class MarcusBox : public MarcusRectangle {
public:
	MarcusBox();
	MarcusBox(const MarcusBox & arg);
	MarcusBox(const MarcusRectangle & arg1, const MarcusFraction & arg2);

	~MarcusBox();

	MarcusFraction getHeight() const ;
	void setHeight(const MarcusFraction & arg);
	void setBase(const MarcusRectangle & arg);

	MarcusFraction getVolume() const ;
	MarcusFraction getSurfaceArea() const ;

	friend bool operator<(const MarcusBox & arg1, const MarcusBox & arg2);
	friend bool operator>(const MarcusBox & arg1, const MarcusBox & arg2);

	void print();

	void operator=(const MarcusBox & arg);

private:
	MarcusFraction height;

};

bool operator<(const MarcusBox & arg1, const MarcusBox & arg2);
bool operator>(const MarcusBox & arg1, const MarcusBox & arg2);

#endif