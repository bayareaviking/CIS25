/* Implementation file for the MarcusCylinder class
	 Program Name:	cisMarcusCylinder.cpp
	 Written By:		Marcus Larsson
	 Date Written:	11/29/2011
	*/

#include <iostream>
#include "MarcusCylinder.h"
using namespace std;

MarcusCylinder::MarcusCylinder() {
	height;
	setRadius(0);
	setCenter(0, 0);
}
MarcusCylinder::MarcusCylinder(const MarcusCylinder & arg) {
	height = arg.height;
	setRadius(arg.getRadius());
	setCenter(arg.getCenter());
}
MarcusCylinder::~MarcusCylinder() {
	//cout << "MarcusCylinder Destructor." << endl;
}

void MarcusCylinder::setHeight(const MarcusFraction & arg) {
	height = arg;
}
void MarcusCylinder::setBase(const MarcusCircle & arg) {
	setRadius(arg.getRadius());
	setCenter(arg.getCenter());
}
MarcusFraction MarcusCylinder::getHeight() const {
	return(height);
}
MarcusFraction MarcusCylinder::getVolume() const {
	return (height * getArea());
}
MarcusFraction MarcusCylinder::getSurfaceArea() const {
	return((getCircumference() * height) + (getArea() * 2));
}

void MarcusCylinder::print(){
	cout << "Area: " << getSurfaceArea() << endl
		  << "Volume: " << getVolume() << endl
		  << "Base:  "  << endl
		  << " - Radius: " << getRadius() << endl
		  << " - Center: " << getCenter() << endl
		  << endl;
}

void MarcusCylinder::operator=(const MarcusCylinder & arg) {
	height = arg.height;
	setRadius(arg.getRadius());
	setCenter(arg.getCenter());
}

bool operator<(const MarcusCylinder & arg1, const MarcusCylinder & arg2) {
	if (arg1.getVolume() < arg2.getVolume()) {
		return 1;
	} else {
		return 0;
	}
}
bool operator>(const MarcusCylinder & arg1, const MarcusCylinder & arg2) {
	if (arg1.getVolume() > arg2.getVolume()) {
		return 1;
	} else {
		return 0;
	}
}
MarcusCylinder operator+(const MarcusCylinder & arg1, const MarcusCylinder & arg2) {
	MarcusCylinder temp;
	// Setting the radius
	if (arg1.getArea() > arg2.getArea()) {
		temp.setRadius(arg1.getRadius());
	} else {
		temp.setRadius(arg2.getRadius());
	}
	// Setting the height
	if (arg1.height < arg2.height) {
		temp.setHeight(arg1.height);
	} else {
		temp.setHeight(arg2.height);
	}
	// Setting the center of the base circle
	temp.setCenter(getMidPoint(arg1.getCenter(), arg2.getCenter()));
	return temp;
}