#include <iostream>
using namespace std;

void analyzeIntegerMarcusLarsson(int);
void menu(void);

int main() {

	menu();

	return 0;
}
void menu(void) {
	int menuOption;
	int inputValue;

	menuOption = 1;

	while (menuOption != 0) {
		cout << "*********************************************" << endl
			  << "*                  MENU                     *" << endl
			  << "* 1. Calling analyzeIntegerMarcusLarsson() *" << endl
			  << "* 2. Quit                                   *" << endl
			  << "*********************************************" << endl
			  << endl
			  << "Select an option, (1 or 2): ";
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
	cout << "The least significant digit: " << num % 10 << endl << endl;
	cout << "The most significant digit: " << MSD << endl << endl;
	cout << "The smallest digit: " << smallest << endl << endl;
	cout << "The largest digit: " << largest << endl << endl;
	cout << "The sum of digit(s): " << sum << endl << endl;


	return;
}