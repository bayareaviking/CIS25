/*** Implementation file for the MarcusPoint class
	* Program Name:	MarcusPoint.cpp
	* Written By:		Marcus Larsson
	* Date Written:	11/26/2011
	*/

#include <iostream>
#include "MarcusPoint.h"
using namespace std;

MarcusPoint::MarcusPoint() {
	x = 0;
	y = 0;
}
MarcusPoint::MarcusPoint(const MarcusPoint & arg) {
	x = arg.x;
	y = arg.y;
}
MarcusPoint::MarcusPoint(const MarcusFraction & arg1, const MarcusFraction & arg2) {
	x = arg1;
	y = arg2;
}

MarcusPoint::~MarcusPoint() {
	//cout << "MarcusPoint Destructor" << endl;
}

void MarcusPoint::setX(const MarcusFraction & arg) {
	x = arg;
}
void MarcusPoint::setY(const MarcusFraction & arg) {
	y = arg;
}
void MarcusPoint::setPoint(const MarcusFraction & arg1, const MarcusFraction & arg2) {
	x = arg1;
	y = arg2;
}
MarcusFraction MarcusPoint::getX() {
	return x;
}
MarcusFraction MarcusPoint::getY() {
	return y;
}

void MarcusPoint::moveBy(const MarcusFraction & arg1, const MarcusFraction & arg2) {
	x = x + arg1;
	y = y + arg2;
	return;
}

void MarcusPoint::moveBy(const MarcusFraction & arg) {
	x = x + arg;
	y = y + arg;
	return;
}

void MarcusPoint::flipByX() {
	y = y * -1;
	return;
}

void MarcusPoint::flipByY() {
	x = x * -1;
	return;
}

void MarcusPoint::flipThroughOrigin() {
	x = x * -1;
	y = y * -1;
}

void MarcusPoint::print() {
	cout << "(" << x << ", " << y << ")" << endl;
}

void MarcusPoint::operator=(const MarcusPoint & arg) {
	x = arg.x;
	y = arg.y;
	return;
}

// Stand-alone Function
ostream& operator<<(ostream & arg1, const MarcusPoint & arg2) {
	arg1 << "(" << arg2.x << ", " << arg2.y << ")";
	return arg1;
}

MarcusPoint getMidPoint(const MarcusPoint & arg1, const MarcusPoint & arg2) {
	return MarcusPoint((arg1.x + arg2.x)/2, (arg1.y + arg2.y)/2);
}