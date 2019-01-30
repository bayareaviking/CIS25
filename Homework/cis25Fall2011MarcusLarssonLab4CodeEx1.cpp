/**
  * Program Name: cisFall2011MarcusLarssonLab4CodeEx1.cpp
  * Written By:   Marcus Larsson
  * Due Date:     10/06/2011
  */
#include <iostream>
using namespace std;

void assignmentInfoMarcusLarsson(int, int, int, int);
void analyzeIntegerMarcusLarsson(int);
void analyzeIntegerArrayMarcusLarsson(int [], int);
void menu(void);

int main() {

	assignmentInfoMarcusLarsson(4, 1, 10, 6);
	menu();

	return 0;
}
void menu(void) {
	int menuOption;
	int inputValue;
	int* iPtr;
	int aSize;
	int i;

	iPtr = NULL;
	aSize = 0;
	menuOption = 1;

	while (menuOption != 0) {
		cout  << "**************************************************" << endl
			   << "*                  MENU                          *" << endl
			   << "* 1. Calling analyzeIntegerMarcusLarsson()       *" << endl
			   << "* 1. Calling analyzeIntegerArrayMarcusLarsson()  *" << endl
			   << "* 2. Quit                                        *" << endl
			   << "**************************************************" << endl
			   << endl
			   << "Select an option, (1, 2, or 3): ";
		cin >> menuOption;

		cout << endl
			  << endl;

		if (menuOption == 1) {
			cout << "Enter an integer: ";
			cin >> inputValue;
			
			analyzeIntegerMarcusLarsson(inputValue);

			cout << endl
				  << endl
				  << endl
				  << endl;
		} else if (menuOption == 2) {
			cout << "Enter the number of integers you would like to work with: ";
			cin >> aSize;

			if (aSize < 0) {
				aSize *= -1;
			}

			iPtr = new int[aSize * sizeof(int)];

			for (i = 0; i < aSize; i++) {
				cout << "Please enter integer #" << i + 1 << ": ";
				cin >> iPtr[i];

				if (iPtr[i] < 0) {
					iPtr[i] *= -1;
				}
			}
			analyzeIntegerArrayMarcusLarsson(iPtr, aSize);

			cout << endl
				  << endl
				  << endl
				  << endl;
		} else if (menuOption == 3) {
			cout << "Have Fun. . . " << endl;
			break;
		} else {
			cout << "Wrong Option!" 
			 	 << endl
				 << endl
				 << endl
				 << endl;
		}

	}

	return;
}
void analyzeIntegerMarcusLarsson(int arg) {
	int num;
	int divBy;
	int MSD;
	int sum;
	int largest;
	int smallest;

	MSD = 0;
	sum = 0;
	smallest = 10;
	largest = 0;

	// Setting the input argument to a positive integer value
	if (arg < 0) {
		num = arg * -1;
	} else {
		num = arg;
	}

	// Inspecting each digit
	for (divBy = 1; (num / divBy) != 0; divBy *= 10) {

		// Finding the Most Significant Digit
		MSD = (num / divBy) % 10;

		// Adding up all the digits in the integer
		sum += MSD;

		// Finding the smallest digit
		if (MSD < smallest) {
			smallest = MSD;
		}

		// Finding the largest digit
		if (MSD > largest) {
			largest = MSD;
		}

	}

	// Beginning output of even/odd and positive/negative
	cout << arg << " is an ";

	// Testing whether arg value is even or odd
	if (arg % 2 == 0) {
		cout << "even";
	} else {
		cout << "odd";
	}

	cout << " and ";

	// Testing whether arg value is positive or negative
	if (arg < 0) {
		cout << "negative";
	} else {
		cout << "positive";
	}

	cout << " number." << endl << endl;

	// The rest of the output
	cout << "The least significant digit: " << num % 10 << endl;
	cout << "The most significant digit: " << MSD << endl << endl;
	cout << "The smallest digit: " << smallest << endl;
	cout << "The largest digit: " << largest << endl << endl;
	cout << "The sum of digit(s): " << sum << endl << endl;


	return;
}
void analyzeIntegerArrayMarcusLarsson(int inputArray[], int size) {
	int* iArray1;
	int* iArray2;
	int i;
	int num;
	int divBy;
	int MSD;
	int largest;
	int smallest;

	i = 0;
	divBy = 0;
	MSD = 0;
	smallest = 10;
	largest = 0;

	iArray1 = new int[size * sizeof(int)];
	iArray2 = new int[size * sizeof(int)];



	// Rolling through the array of ints
	for (i = 0; i < size; i++) {
		num = inputArray[i];

		// Inspecting each digit
		for (divBy = 1; (num / divBy) != 0; divBy *= 10) {

			// Finding the Most Significant Digit
			MSD = (num / divBy) % 10;

			// Finding the smallest digit
			if (MSD < smallest) {
				smallest = MSD;
			}

			// Finding the largest digit
			if (MSD > largest) {
			largest = MSD;
			}
		}
	}
	
	// Checking which ints have the largest and smallest digits in common
	for (i = 0; i < size; i++) {
		num = inputArray[i];

		// Inspecting each digit
		for (divBy = 1; (num / divBy) != 0; divBy *= 10) {

			// Finding the Most Significant Digit
			MSD = (num / divBy) % 10;

			// Checking MSD against the known smallest digit
			if (MSD == smallest) {
				iArray1[i] = 1;
			}

			// Checking MSD against the known largest digit
			if (MSD == largest) {
				iArray2[i] = 1;
			}
		}
	}

	// Printing out the results
	cout << "The smallest digit: " << smallest << endl;
	cout << "\tDigit " << smallest << " can be found in integer number(s): ";
	for (i = 0; i < size; i++) {
		if (iArray1[i] == 1) {
			cout << i + 1 << ", ";
		}
	}
	cout << "\b\b" << " " << endl << endl;

	cout << "The largest digit: " << largest << endl;
	cout << "\tDigit " << largest << " can be found in integer number(s): ";
	for (i = 0; i < size; i++) {
		if (iArray2[i] == 1) {
			cout << i + 1 << ", ";
		}
	}
	cout << "\b\b" << " " << endl << endl;

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
