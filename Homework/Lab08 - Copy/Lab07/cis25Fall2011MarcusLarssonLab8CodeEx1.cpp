/*** Program Name:	cis25Fall2011MarcusLarssonLab8Ex1.cpp
	* Written By:		Marcus Larsson
	* Date Written:	11/10/2011
	*/

#include <iostream>
#include <string>
#include "MarcusBox.h"
#include "MarcusCylinder.h"
using namespace std;
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
void menu();

void main() {

	assignmentInfoMarcusLarsson(7, 1, 12, 13);	

	menu();

	return;
}
void menu() {
	char input;
	int comp1;
	int comp2;
	int print;
	bool flagRec;
	bool flagCir;
	bool flagBox;
	bool flagCyl;
	flagRec = false;
	flagCir = false;
	flagBox = false;
	flagCyl = false;
	MarcusRectangle rec1;
	MarcusRectangle rec2;
	MarcusCircle cir1;
	MarcusCircle cir2;
	MarcusBox box1;
	MarcusBox box2;
	MarcusCylinder cyl1;
	MarcusCylinder cyl2;
	MarcusFraction fracX;
	MarcusFraction fracY;
	MarcusFraction fracLen;
	MarcusFraction fracWid;
	MarcusFraction fracHi;
	MarcusFraction fracRad;
	bool printArray[8] = {false};
	MarcusFraction area[4];
	string areaName[4];
	MarcusFraction volume[4];
	string volName[4];

	input = '0';
	while (input != '8') {
      cout << "\n********************************************" << endl
           << "*               MENU                       *" << endl
           << "*                                          *" << endl
           << "* 1. Create 2 MarcusRectangle Objects      *" << endl
           << "* 2. Create 2 MarcusCircle Objects         *" << endl
           << "* 3. Create 2 MarcusBox Objects            *" << endl
           << "* 4. Create 2 MarcusCylinder Objects       *" << endl
           << "* 5. Compare 2 selected objects by area    *" << endl
			  << "* 6. Compare 2 selected objects by volume  *" << endl
			  << "* 7. Print selected objects                *" << endl
           << "* 8. Quit                                  *" << endl
           << "*                                          *" << endl
           << "********************************************" << endl
           << "\nSelect an option: ";
		cin >> input;
		switch(input) {
		case '1' :
			cout << "\nCreating rectangle #1: " << endl;
			fracX.setFrac(1, 2);
			fracY.setFrac(3, 4);
			fracLen.setFrac(4);
			fracWid.setFrac(6);			
			rec1.setLowerLeft(fracX, fracY);
			rec1.setLength(fracLen);
			rec1.setWidth(fracWid);
			area[0] = rec1.getArea();
			areaName[0] = "rectangle #1";
			rec1.print();

			cout << "\nCreating rectangle #2: " << endl;
			fracX.setFrac(5);
			fracY.setFrac(5, 7);
			fracLen.setFrac(1, 3);
			fracWid.setFrac(4, 5);	
			rec2.setLowerLeft(fracX, fracY);
			rec2.setLength(fracLen);
			rec2.setWidth(fracWid);
			area[1] = rec2.getArea();
			areaName[1] = "rectangle #2";
			rec2.print();

			flagRec = true;

			break;
		case '2' :
			cout << "\nCreating circle #1: " << endl;
			fracX.setFrac(5, 7);
			fracY.setFrac(3, 5);
			fracRad.setFrac(6);
			cir1.setCenter(fracX, fracY);
			cir1.setRadius(fracRad);
			area[2] = cir1.getArea();
			areaName[2] = "circle #1";
			cir1.print();

			cout << "\nCreating circle #1: " << endl;
			fracX.setFrac(7);
			fracY.setFrac(5, 8);
			fracRad.setFrac(1, 8);
			cir2.setCenter(fracX, fracY);
			cir2.setRadius(fracRad);
			area[3] = cir2.getArea();
			areaName[3] = "circle #2";
			cir2.print();

			flagCir = true;

			break;
		case '3' :
			if (flagRec == true) {
				cout << "\nCreating box #1: " << endl;
				fracHi.setFrac(1, 5);
				box1.setHeight(fracHi);
				box1.setBase(rec1);
				volume[0] = box1.getVolume();
				volName[0] = "box #1";
				box1.print();

				cout << "\nCreating box #2: " << endl;
				fracHi.setFrac(8);
				box2.setBase(rec2);
				box2.setHeight(fracHi);
				volume[1] = box2.getVolume();
				volName[1] = "box #2";
				box2.print();

				flagBox = true;

			} else {
				cout << "\nYou haven't created any rectangles to use for bases," << endl
					  << "please go back and create some rectangles first." << endl 
					  << endl;
			}
			break;
		case '4' :
			if (flagCir == true) {
				cout << "\nCreating cylinder #1: " << endl;
				fracHi.setFrac(3);
				cyl1.setHeight(fracHi);
				cyl1.setBase(cir1);
				volume[2] = cyl1.getVolume();
				volName[2] = "cylinder #1";
				cyl1.print();

				cout << "\nCreating cylinder #2: " << endl;
				fracHi.setFrac(1, 4);
				cyl2.setHeight(fracHi);
				cyl2.setBase(cir2);
				volume[3] = cyl2.getVolume();
				volName[3] = "cylinder #2";
				cyl2.print();

				flagCyl = true;

			} else {
				cout << "\nYou haven't created any circles to use for bases," << endl
					  << "please go back and create some circles first." << endl 
					  << endl;
			}
			break;
		case '5' :
			if (flagRec == false && flagCir == false) {
				cout << "\nNo rectangles or circles have been created, please try again." << endl;
			} else {
				if (flagRec == true && flagCir == true) {
					comp1 = 0;
					comp2 = 0;
					
					cout << "\n********************************************" << endl
						  << "*   Pick Two Objects to Compare by Area    *" << endl
						  << "*                                          *" << endl
						  << "* 1. Rectangle #1                          *" << endl
						  << "* 2. Rectangle #2                          *" << endl
						  << "* 3. Circle #1                             *" << endl
						  << "* 4. Circle #2                             *" << endl
						  << "********************************************" << endl
						  << "\nMake your first selection: ";
					cin >> comp1;
					if (comp1 < 0 || comp1 > 5) {
						cout << "\nThat is not a menu selection, please try again." << endl;
					}

					cout << "\nNow please make your second selection: ";
					cin >> comp2;
					if (comp2 < 0 || comp2 > 5) {
						cout << "\nThat is not a menu selection, please try again." << endl;
					}

					if (comp1 == comp2) {
						cout << "\nYou chose the same option twice." << endl;
					}

					if (area[comp1 - 1] > area[comp2 - 1]) {
						cout << "\nThe area of " << areaName[comp1 - 1] << " is larger than the area of " << areaName[comp2 - 1] << "." << endl;
					} else {
						cout << "\nThe area of " << areaName[comp2 - 1] << " is larger than the area of " << areaName[comp1 - 1] << "." << endl;
					}					
				} else {
					if (flagRec == true) {
						cout << "\nSince no circles have been created, we're comparing only rectangles." << endl;
						if (rec1 > rec2) {
							cout << "\nRectangle #1 has the larger area of " << rec1.getArea() << endl
								  << endl;
						} else {
							cout << "\nRectangle #2 has the larger area of " << rec2.getArea() << endl
								  << endl;
						}
					}
					if (flagCir == true) {
						cout << "\nSince no rectangles have been created, we're comparing only circles." << endl;
						if (cir1 > cir2) {
							cout << "\nCircle #1 has the larger area of " << cir1.getArea() << endl;
						} else {
							cout << "\nCircle #2 has the larger area of " << cir2.getArea() << endl;
						}

					}
				}
			}
			break;
		case '6' :
			if (flagBox == false && flagCyl == false) {
				cout << "\nNo boxes or cylinders have been created, please try again." << endl;
			} else {
				if (flagBox == true && flagCyl == true) {
					comp1 = 0;
					comp2 = 0;
					
					cout << "\n********************************************" << endl
						  << "*   Pick Two Objects to Compare by Area    *" << endl
						  << "*                                          *" << endl
						  << "* 1. Box #1                                *" << endl
						  << "* 2. Box #2                                *" << endl
						  << "* 3. Cylinder #1                           *" << endl
						  << "* 4. Cylinder #2                           *" << endl
						  << "********************************************" << endl
						  << "\nMake your first selection: ";
					cin >> comp1;
					if (comp1 < 0 || comp1 > 5) {
						cout << "\nThat is not a menu selection, please try again." << endl;
					}

					cout << "\nNow please make your second selection: ";
					cin >> comp2;
					if (comp2 < 0 || comp2 > 5) {
						cout << "\nThat is not a menu selection, please try again." << endl;
					}

					if (comp1 == comp2) {
						cout << "\nYou chose the same option twice." << endl;
					}

					if (volume[comp1 - 1] > volume[comp2 - 1]) {
						cout << "\nThe volume of " << volName[comp1 - 1] << " is larger than the volume of " << volName[comp2 - 1] << "." << endl;
					} else {
						cout << "\nThe volume of " << volName[comp2 - 1] << " is larger than the volume of " << volName[comp1 - 1] << "." << endl;
					}
					
				} else {
					if (flagBox == true) {
						cout << "\nSince no cylinders have been created, we're comparing only boxes." << endl;
						if (box1 > box1) {
							cout << "\nBox #1 has the larger volume of " << box1.getVolume() << endl;
						} else {
							cout << "\nBox #2 has the larger volume of " << box2.getVolume() << endl;
						}
					}
					if (flagCyl == true) {
						cout << "\nSince no boxes have been created, we're comparing only cylinders." << endl;
						if (cyl1 > cyl2) {
							cout << "\nCylinder #1 has the larger volume of " << cyl1.getVolume() << endl;
						} else {
							cout << "\nCylinder #2 has the larger volume of " << cyl2.getVolume() << endl;
						}

					}
				}
			}
			break;
		case '7' :
				if (flagRec == true || flagCir == true || flagBox == true || flagCyl == true) {
					print = 0;
					while (print != 9) {					
						cout << "\n********************************************" << endl
								<< "*   Which Object(s) Do You Want to Print?  *" << endl
								<< "*                                          *" << endl
								<< "* 1. Rectangle #1                          *" << endl
								<< "* 2. Rectangle #2                          *" << endl
								<< "* 3. Circle #1                             *" << endl
								<< "* 4. Circle #2                             *" << endl
								<< "* 5. Box #1                                *" << endl
								<< "* 6. Box #2                                *" << endl
								<< "* 7. Cylinder #1                           *" << endl
								<< "* 8. Cylinder #2                           *" << endl
								<< "* 9. Print                                 *" << endl
								<< "*                                          *" << endl
								<< "********************************************" << endl
								<< "\nSelect an option: ";
						cin >> print;
						cout << endl;

						if (print > 0 && print < 9) {
							printArray[print - 1] = true;
							cout << "Please select another item to print. . . " << endl;
						} else if (print == 9) {
							cout << "Printing your selection(s). . . " << endl
								  << endl;
						} else {
							cout << "That's not a menu option. Please try again." << endl
								  << endl;
						}
					}
					if (printArray[0] && flagRec == true) {
						cout << "Rectangle #1 - " << endl;
						rec1.print();
						cout << endl;
						printArray[0] = false;
					} else if (printArray[0] && flagRec == false) {
						cout << "Rectangle #1 doesn't exist, cannot print." << endl;
					}
					if (printArray[1] && flagRec == true) {
						cout << "Rectangle #2 - " << endl;
						rec2.print();
						cout << endl;
						printArray[1] = false;
					} else if (printArray[1] && flagRec == false) {
						cout << "Rectangle #2 doesn't exist, cannot print." << endl;
					}
					if (printArray[2] && flagCir == true) {
						cout << "Circle #1 - " << endl;
						cir1.print();
						cout << endl;
						printArray[2] = false;
					} else if (printArray[2] && flagCir == false) {
						cout << "Circle #1 doesn't exist, cannot print." << endl;
					}
					if (printArray[3] && flagCir == true) {
						cout << "Circle #2 - " << endl;
						cir2.print();
						cout << endl;
						printArray[3] = false;
					} else if (printArray[3] && flagCir == false) {
						cout << "Circle #2 doesn't exist, cannot print." << endl;
					}
					if (printArray[4] && flagBox == true) {
						cout << "Box #1 - " << endl;
						box1.print();
						cout << endl;
						printArray[4] = false;
					} else if (printArray[4] && flagBox == false) {
						cout << "Box #1 doesn't exist, cannot print." << endl;
					}
					if (printArray[5] && flagBox == true) {
						cout << "Box #2 - " << endl;
						box2.print();
						cout << endl;
						printArray[5] = false;
					} else if (printArray[5] && flagBox == false) {
						cout << "Box #2 doesn't exist, cannot print." << endl;
					}
					if (printArray[6] && flagCyl == true) {
						cout << "Cylinder #1 - " << endl;
						cyl1.print();
						cout << endl;
						printArray[6] = false;
					} else if (printArray[6] && flagCyl == false) {
						cout << "Cylinder #1 doesn't exist, cannot print." << endl;
					}
					if (printArray[7] && flagCyl == true) {
						cout << "Cylinder #2 - " << endl;
						cyl2.print();
						cout << endl;
						printArray[7] = false;
					} else if (printArray[7] && flagCyl == false) {
						cout << "Cylinder #2 doesn't exist, cannot print." << endl;
					}
				} else {
					cout << "\nAt least one set of objects has to be created before you can print something." << endl;
				}
			break;
		case '8' :
			cout << "\nHave fun. . . " << endl;
			break;
		default :
			cout << "\nThat is not a menu option." << endl << endl << endl;
			break;    
		}
	}
	return;
}