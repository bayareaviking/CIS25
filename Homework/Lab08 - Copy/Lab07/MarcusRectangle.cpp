/* Implementation file for the MarcusRectangle class
	 Program Name:	cisMarcusRectangle.cpp
	 Written By:		Marcus Larsson
	 Date Written:	11/29/2011
	*/

#include <iostream>
#include "MarcusRectangle.h"
using namespace std;

MarcusRectangle::MarcusRectangle() {
	length;
	width;
	lowerLeft;
}
MarcusRectangle::MarcusRectangle(const MarcusRectangle & arg) {
	length = arg.length;
	width = arg.width;
	lowerLeft = arg.lowerLeft;
}
MarcusRectangle::MarcusRectangle(const MarcusFraction & arg1, const MarcusFraction & arg2, const MarcusPoint & arg3) {
	length = arg1;
	width = arg2;
	lowerLeft = arg3;
}

MarcusRectangle::~MarcusRectangle() {
	//cout << "MarcusRectangle Destructor." << endl;
}

void MarcusRectangle::setLength(const MarcusFraction & arg) {
	length = arg;
}
void MarcusRectangle::setWidth(const MarcusFraction & arg) {
	width = arg;
}
void MarcusRectangle::setLowerLeft(const MarcusPoint & arg) {
	lowerLeft = arg;
}
void MarcusRectangle::setLowerLeft(const MarcusFraction & arg1, const MarcusFraction & arg2) {
	lowerLeft.setPoint(arg1, arg2);
}
MarcusFraction MarcusRectangle::getLength() const {
	return length;
}
MarcusFraction MarcusRectangle::getWidth() const {
	return width;
}
MarcusPoint MarcusRectangle::getLowerLeft() const {
	return lowerLeft;
}

void MarcusRectangle::print() {
	cout << "Length: " << getLength() << endl
		  << "Width: " << getWidth() << endl
		  << "Corner: " << getLowerLeft() << endl
		  << endl;
}

MarcusFraction MarcusRectangle::getArea() const {
	return(width * length);
}
MarcusFraction MarcusRectangle::getPerimeter() const {
	return((width * 2) + (length * 2));
}

void MarcusRectangle::operator=(const MarcusRectangle & arg) {
	width = arg.width;
	length = arg.length;
	lowerLeft = arg.lowerLeft;
}

bool operator<(const MarcusRectangle & arg1, const MarcusRectangle & arg2) {
	if (arg1.getArea() < arg2.getArea()) {
		return 1;
	} else {
		return 0;
	}
}
bool operator>(const MarcusRectangle & arg1, const MarcusRectangle & arg2) {
	if (arg1.getArea() > arg2.getArea()) {
		return 1;
	} else {
		return 0;
	}
}