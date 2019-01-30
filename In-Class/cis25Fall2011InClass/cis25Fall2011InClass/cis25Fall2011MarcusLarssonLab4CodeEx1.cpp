/**
  * Program Name: cisFall2011MarcusLarssonLab3CodeEx1.cpp
  * Written By:   Marcus Larsson
  * Due Date:     09/27/2011
  */
#include <iostream>
using namespace std;

void assignmentInfoMarcusLarsson(int, int, int, int);
void analyzeIntegerMarcusLarsson(int);
void analyzeIntegerArrayMarcusLarsson(int [], int); // Not the right function!
void menu(void);

int main() {

  assignmentInfoMarcusLarsson(3, 1, 10, 6);
	menu();

	return 0;
}
void menu(void) {
	int menuOption;
	int inputValue;

	menuOption = 1;

	while (menuOption != 0) {
		cout << "**************************************************" << endl
			   << "*                  MENU                          *" << endl
			   << "* 1. Calling analyzeIntegerMarcusLarsson()       *" << endl
         << "* 1. Calling analyzeIntegerArrayMarcusLarsson()  *" << endl
			   << "* 3. Quit                                        *" << endl
			   << "**************************************************" << endl
			   << endl
			   << "Select an option, (1, 2 or 3): ";
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
      /* Ask for an integer, X, and create an array with X number of indexes.
         Pass array and number of indexes to function, then analyze each int in array. */

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
  cout << "The least significant digit: " << num % 10 << endl << endl
	     << "The most significant digit: " << MSD << endl << endl
	     << "The smallest digit: " << smallest << endl << endl
	     << "The largest digit: " << largest << endl << endl
	     << "The sum of digit(s): " << sum << endl << endl;

	return;
}
void analyzeIntegerArrayMarcusLarsson(int functionArray[], int size ) {
	//int iteration[ 10 ] = { 0 };
	int i;
	int div;
	int index;

  // Rolling through the array of ints
	for (i = 0; i <= ( size - 1 ); i++){

    // 'div' is the int we're dissecting
		div = functionArray[i];

		while (div != 0) {
			if (div < 0) {
				div *= -1;
			}
      //Incrementing a different array, may not use
			//index = div % 10;
			//div /= 10;
			//iteration[index]++;
		}
	}

	return;
}