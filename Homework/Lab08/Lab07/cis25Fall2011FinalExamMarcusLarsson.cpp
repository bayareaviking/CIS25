/*** Program Name:	cis25Fall2011FinalMarcusLarsson.cpp
	* Written By:		Marcus Larsson
	* Date Written:	12/13/2011
	*/

#include <iostream>
#include "MarcusBox.h"
#include "MarcusCylinder.h"
#include "MarcusSwap.h"
using namespace std;

void menu();
void printMenu();

void main() {

	menu();

	return;
}
void menu() {
	
	cout << "Starting at Line 50:" << endl; // Line 50
	MarcusFraction* fPtrA = new MarcusFraction(4, 1); // Line 100
	cout << *fPtrA << endl;

	MarcusFraction* fPtrC = new MarcusFraction(3, 1); // Line 300
	cout << *fPtrC << endl;

	MarcusFraction* fPtrE = new MarcusFraction(2, 1); // Line 500
	cout << *fPtrE << endl;

	MarcusFraction* fPtrF = new MarcusFraction(9, 1); // Line 600
	cout << *fPtrF << endl;

	cout << "\nStarting at Line 1880:" << endl; // Line 1880
	MarcusCircle* cPtrA = new MarcusCircle(*fPtrA); // Line 2000
	// cout << *cPtrA << endl;

	MarcusCircle* cPtrB = new MarcusCircle(*fPtrC); // Line 2100
	// cout << *cPtrB << endl;

	MarcusCircle* cPtrC = new MarcusCircle(*fPtrE); // Line 2200
	// cout << *cPtrC << endl;

	cout << "Starting at Line 2680:" << endl; // Line 2680
	MarcusCylinder* cyPtrA = new MarcusCylinder(*cPtrA, *fPtrA); // Line 3000
	// cout << *cyPtrA << endl;

	MarcusCylinder* cyPtrB = new MarcusCylinder(*cPtrB, *fPtrE); // Line 3100
	// cout << *cyPtrB << endl;

	MarcusCylinder* cyPtrC = new MarcusCylinder(*cPtrC, *fPtrC); // Line 3200
	// cout << *cyPtrC << endl;

	cout << "Starting at Line 3300:" << endl; // Line 3300
	MarcusRectangle* rPtrA = new MarcusRectangle(*fPtrA, *fPtrA); // Line 3400
	// cout << *rPtrA << endl;

	MarcusRectangle* rPtrB = new MarcusRectangle(*fPtrA, *fPtrE); // Line 3500
	// cout << *rPtrB << endl;

	MarcusRectangle* rPtrC = new MarcusRectangle(*fPtrA, *fPtrC); // Line 3600
	// cout << *rPtrC << endl;

	cout << "Starting at Line 3650:" << endl; // Line 3650
	MarcusBox* boxPtrA = new MarcusBox(*rPtrA, *fPtrA); // Line 3700
	// cout << *boxPtrA << endl;

	MarcusBox* boxPtrB = new MarcusBox(*rPtrB, *fPtrA); // Line 3800
	// cout << *boxPtrB << endl;

	MarcusBox* boxPtrC = new MarcusBox(*rPtrC, *fPtrC); // Line 3700
	// cout << *boxPtrC << endl;

	int option; // Line 3800
	// Didn't have time to set up dynamic arrays to store objects.
	option = 0;
	do {      
		printMenu();
		cout << "\nSelect an option: ";
		cin >> option;
		switch(option) {
		case 1:
			cout << "\nNot implemented yet, sorry." << endl;
			break;
		case 2:
			cout << "\nNot implemented yet, sorry." << endl;
			break;
		case 3:
			cout << "\nNot implemented yet, sorry." << endl;
			break;
		case 4:
			cout << "\nNot implemented yet, sorry." << endl;
			break;
		case 5:
			cout << "\nNot implemented yet, sorry." << endl;
			break;
		case 6:
			cout << "\nNot implemented yet, sorry." << endl;
			break;
		case 7:
			cout << "\nNot implemented yet, sorry." << endl;
			break;
		case 8:
			cout << "\nGoodbye, CIS 25!." << endl; // Line 5000
			break;
		default:
			cout << "\nThat's not a menu option, try again." << endl; // Line 5100
			break;		
		}
	} while (option != 8); // Line 5200
	return; // Line 10000
}
void printMenu() {
	cout << "\n***************************************************************" << endl
           << "*                           MENU                              *" << endl
           << "*                                                             *" << endl
           << "* 1. Get & Display Largest Area (All Objects)                 *" << endl
           << "* 2. Get & Display Largest Volume (All Objects)               *" << endl
           << "* 3. Display Areas from Largest to Smallest (All Circles)     *" << endl
           << "* 4. Display Areas from Largest to Smallest (All Rectangles)  *" << endl
           << "* 5. Display Volumes from Largest to Smallest (All Cylinders) *" << endl
			  << "* 6. Display Volumes from Largest to Smallest (All Boxes)     *" << endl
			  << "* 7. Display Volumes from Largest to Smallest (All Objects)   *" << endl
           << "* 8. Quit                                                     *" << endl
           << "*                                                             *" << endl
           << "***************************************************************" << endl;
	return;
}