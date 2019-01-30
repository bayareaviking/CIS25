#include <iostream>
using namespace std;

void analyzeFloatingPointMarcusLarsson(float);
void menu(void);

int main() {

	menu();

	return 0;
}
void menu(void) {
	int menuOption;
	float inputValue;

	menuOption = 0;

	while (menuOption != 2) {
		cout << "***************************************************" << endl
			  << "*                       MENU                      *" << endl
			  << "* 1. Calling analyzeFloatingPointMarcusLarsson() *" << endl
			  << "* 2. Quit                                         *" << endl
			  << "***************************************************" << endl
			  << endl
			  << "Select an option, (1 or 2): ";


		cin >> menuOption;

		cout << endl
			  << endl;

		if (menuOption == 1) {
			cout << "Enter a floating-point: ";
			cin >> inputValue;
			
			analyzeFloatingPointMarcusLarsson(inputValue);

			cout << endl
				  << endl
				  << endl
				  << endl;

		} else if (menuOption == 2) {
			cout << "Have Fun. . . " << endl;
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
void analyzeFloatingPointMarcusLarsson(float arg) {
	int num;
	int divBy;
	int IP;

	IP = 0;

	// Setting the input argument to a positive integer value
	if (arg < 0) {
		num = int (arg * -100);
	} else {
		num = int (arg * 100);
	}

	// Inspecting each digit
	for (divBy = 1; (num / divBy) != 0; divBy *= 10) {

		// Finding the Most Significant Digit
		IP = (num / divBy) % 10;
	}


	// Output
	cout << "The most significant digit of IP: " << IP << endl << endl;
	cout << "The second-most significant digit of FP: " << num % 10 << endl << endl;


	return;
}