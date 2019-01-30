/*** Program Name:	cis25Fall2011MarcusLarssonLab6Ex1.cpp
	* Written By:		Marcus Larsson
	* Date Written:	11/10/2011
	*/

#include <iostream>
#include "MarcusFraction.h"
using namespace std;

void menu(const MarcusFraction&, const MarcusFraction&);
void assignmentInfoMarcusLarsson(int, int, int, int);

void main() {
	MarcusFraction frA(4, 8);
	MarcusFraction frB(3, 7);

	assignmentInfoMarcusLarsson(6, 1, 11, 17);

	cout << "\nThe initial fractions we're working with are " << frA << " and " << frB << "." << endl << endl << endl;

	menu(frA, frB);

	return;
}
void menu(const MarcusFraction& arg1, const MarcusFraction& arg2) {
	MarcusFraction frC;
	char input;

	input = '0';

	while (input != '6') {
      cout << "\n***************************" << endl
           << "*          MENU           *" << endl
           << "*                         *" << endl
           << "* 1.Calling operator+()   *" << endl
           << "* 2.Calling operator-()   *" << endl
           << "* 3.Calling operator*()   *" << endl
           << "* 4.Calling operator/()   *" << endl
           << "* 5.Calling operator<<()  *" << endl
           << "* 6.Quit                  *" << endl
           << "*                         *" << endl
           << "***************************" << endl
           << "\nSelect an option: ";
		cin >> input;

		switch(input) {
		case '1' :
			frC = arg1 + arg2;
			cout << "\n" << arg1 << " plus " << arg2 << " is " << frC << "." << endl << endl << endl;
			break;
		case '2' :
			frC = arg1 - arg2;
			cout << "\n" << arg1 << " minus " << arg2 << " is " << frC << "." << endl << endl << endl;
			break;
		case '3' :
			frC = arg1 * arg2;
			cout << "\n" << arg1 << " times " << arg2 << " is " << frC << "." << endl << endl << endl;
			break;
		case '4' :
			frC = arg1 / arg2;
			cout << "\n" << arg1 << " divided by " << arg2 << " is " << frC << "." << endl << endl << endl;
			break;
		case '5' :
			cout << "\nThe result of the last operation is the fraction " << frC << endl << endl << endl;
			break;
		case '6' :
			cout << "\n"  "Have fun. . ." << endl;
			break;
		default :
			cout << "\nThat is not a menu option!" << endl << endl << endl;
			break;    
		}
	}
	return;
}
// Function to display assignment information
void assignmentInfoMarcusLarsson(int lab, int ex, int month, int day) {

  cout << "Class information" << endl
       << "   CIS 25 - C++ Programming" << endl
       << "   Laney College" << endl
       << endl
       << "Assignment Information --" << endl
       << "   Assignment Number:   Lab 0" << lab
       << ", - Code Exercise #" << ex << endl
       << "   Written by:          Marcus Larsson" << endl
       << "   Submitted Date:      " << month
       << "/" << day << "/2011" << endl
       << endl;

  return;
}