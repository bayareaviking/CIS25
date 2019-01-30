/* Implementation file for the MarcusBox class
	 Program Name:	cisMarcusBox.cpp
	 Written By:		Marcus Larsson
	 Date Written:	11/29/2011
	*/

#include <iostream>
#include "MarcusBox.h"
using namespace std;

MarcusBox::MarcusBox() {
	height;
	setLength(0);
	setWidth(0);
	setLowerLeft(0, 0);
}
MarcusBox::MarcusBox(const MarcusBox & arg) {
	height = arg.height;
	setLength(arg.getLength());
	setWidth(arg.getWidth());
	setLowerLeft(arg.getLowerLeft());
}
MarcusBox::MarcusBox(const MarcusFraction & arg1, const MarcusRectangle & arg2) {
	height = arg1;
	setLength(arg2.getLength());
	setWidth(arg2.getWidth());
	setLowerLeft(arg2.getLowerLeft());
}

MarcusBox::~MarcusBox() {
	//cout << "MarcusBox Destructor." << endl;
}

MarcusFraction MarcusBox::getHeight() const {
	return height;
}

void MarcusBox::setHeight(const MarcusFraction & arg) {
	height = arg;
}

void MarcusBox::setBase(const MarcusRectangle & arg) {
	setWidth(arg.getWidth());
	setLength(arg.getLength());
	setLowerLeft(arg.getLowerLeft());
}

MarcusFraction MarcusBox::getVolume() const {
	return(height * getLength() * getWidth());
}
MarcusFraction MarcusBox::getSurfaceArea() const {
	return((getArea() * 2) + ((height * getWidth()) * 2) + ((height * getLength()) * 2));
}

void MarcusBox::print() {
	cout << "Length: " << getLength() << endl
		  << "Width: " << getWidth() << endl
		  << "Height " << height << endl
		  << "Corner: " << getLowerLeft() << endl
		  << endl;
}

void MarcusBox::operator=(const MarcusBox & arg) {
	height = arg.height;
	setLength(arg.getLength());
	setWidth(arg.getWidth());
	setLowerLeft(arg.getLowerLeft());
}

bool operator<(const MarcusBox & arg1, const MarcusBox & arg2) {
	if (arg1.getArea() < arg2.getArea()) {
		return 1;
	} else {
		return 0;
	}
}
bool operator>(const MarcusBox & arg1, const MarcusBox & arg2) {
	if (arg1.getArea() > arg2.getArea()) {
		return 1;
	} else {
		return 0;
	}
}