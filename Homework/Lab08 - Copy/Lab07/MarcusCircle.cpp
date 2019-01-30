/* Implementation file for the MarcusCircle class
	 Program Name:	cisMarcusCircle.cpp
	 Written By:		Marcus Larsson
	 Date Written:	11/29/2011
	*/

#include <iostream>
#include "MarcusCircle.h"
using namespace std;

MarcusCircle::MarcusCircle() {
	center;
	radius;
}
MarcusCircle::MarcusCircle(const MarcusCircle & arg) {
	center = arg.center;
	radius = arg.radius;
}
MarcusCircle::MarcusCircle(const MarcusPoint & arg1, const MarcusFraction & arg2) {
	center = arg1;
	radius = arg2;
}

MarcusCircle::~MarcusCircle() {
	//cout << "MarcusCircle Destructor." << endl;
}

MarcusPoint MarcusCircle::getCenter() const {
	return(center);
}
MarcusFraction MarcusCircle::getRadius() const {
	return(radius);
}
MarcusFraction MarcusCircle::getArea() const {
	MarcusFraction pi(157, 50);
	return MarcusFraction(pi * (radius * radius));
}
MarcusFraction MarcusCircle::getCircumference() const {
	MarcusFraction pi(157, 50);
	return MarcusFraction(2 * pi * radius);
}
void MarcusCircle::setCenter(const MarcusPoint & arg) {
	center = arg;
}
void MarcusCircle::setCenter(const MarcusFraction & arg1, const MarcusFraction & arg2) {
	center.setX(arg1);
	center.setY(arg2);
}
void MarcusCircle::setRadius(const MarcusFraction & arg) {
	radius = arg;
}

void MarcusCircle::print() {
	cout << "Area: " << getArea() << endl
		  << "Radius: " << radius << endl
		  << "Center: " << center << endl
		  << endl;
}

void MarcusCircle::operator=(const MarcusCircle & arg) {
	radius = arg.radius;
	center = arg.center;
}

bool operator<(const MarcusCircle & arg1, const MarcusCircle & arg2) {
	if (arg1.getArea() < arg2.getArea()) {
		return 1;
	} else {
		return 0;
	}
}
bool operator>(const MarcusCircle & arg1, const MarcusCircle & arg2) {
	if (arg1.getArea() > arg2.getArea()) {
		return 1;
	} else {
		return 0;
	}
}
MarcusCircle operator+(const MarcusCircle & arg1, const MarcusCircle & arg2) {
	MarcusCircle temp;
	temp.center = getMidPoint(arg1.center, arg2.center);
	temp.radius = arg1.radius + arg2.radius;
	return temp;
}