#include <iostream>
using namespace std;

void menu(void);
void printCommonDigitWithoutArray(int, int);
void printCommonDigitWithArray(int, int);
int main() {

	menu();


	return 0;
}
void menu(void) {
	float menuOption;

	menuOption = 0;

	while (menuOption != 3) {
		cout << "*********************************************" << endl
			  << "*                    MENU                   *" << endl
			  << "* 1. Calling printCommonDigitWithoutArray() *" << endl
			  << "* 2. Calling printCommonDigitWithArray()    *" << endl
			  << "* 3. Quit                                   *" << endl
			  << "*********************************************" << endl
			  << endl
			  << "Select an option, (1, 2 or 3): ";


		cin >> menuOption;

		// Typcasting menuOption to prevent errors
		menuOption = (int) menuOption;

		cout << endl
			  << endl;

		//switch (menuOption) {
		//case 1 :			
		//	printCommonDigitWithoutArray(1268349000, 117225788);
		//	printCommonDigitWithoutArray(1172245700, 983222276);
		//	break;
		//case 2 :
		//	printCommonDigitWithArray(1, 2);
		//	break;
		//case 3:
		//	cout << "Have Fun. . . " << endl;
		//	break;
		//default :
		//	cout << "Wrong option!" << endl;
		//}

		// Using if-else statement instead of switch to catch non-integers
		if (menuOption == 1) {
			printCommonDigitWithoutArray(1268349000, 117225788);
			printCommonDigitWithoutArray(1172245700, 983222276);
		} else if (menuOption == 2) {
			printCommonDigitWithArray(1268349000, 117225788);
			printCommonDigitWithArray(1172245700, 983222276);
		} else if (menuOption == 3) {
			cout << "Have Fun. . . " << endl;
			break;
		} else {
			cout << "Wrong option!" << endl;
		}

	}

	return;
}
void printCommonDigitWithoutArray(int arg1, int arg2) {
	// Digits for arg1
	int digitA1;
	int digitA2;
	int digitA3;
	int digitA4;
	int digitA5;
	int digitA6;
	int digitA7;
	int digitA8;
	int digitA9;
	int digitA0;
	
	// Digits for arg2
	int digitB1;
	int digitB2;
	int digitB3;
	int digitB4;
	int digitB5;
	int digitB6;
	int digitB7;
	int digitB8;
	int digitB9;
	int digitB0;

	int divBy;
	int digitOccur;

	digitA1 = 0;
	digitA2 = 0;
	digitA3 = 0;
	digitA4 = 0;
	digitA5 = 0;
	digitA6 = 0;
	digitA7 = 0;
	digitA8 = 0;
	digitA9 = 0;
	digitA0 = 0;
	
	digitB1 = 0;
	digitB2 = 0;
	digitB3 = 0;
	digitB4 = 0;
	digitB5 = 0;
	digitB6 = 0;
	digitB7 = 0;
	digitB8 = 0;
	digitB9 = 0;
	digitB0 = 0;

	cout << "Finding common digit occurences for " << arg1;
	cout << " and " << arg2 << endl << endl;

	if (arg1 < 0) {
		arg1 *= -1;
	}
	if (arg2 < 0) {
		arg2 *= -1;
	}


	// Running through the first integer
	for (divBy = 1;  (arg1 / divBy) > 0; divBy *= 10) {
		
		// Isolating the digit
		digitOccur = (arg1 / divBy) % 10;

		// Incrementing the proper variable
		switch (digitOccur) {
		case 1 :
			digitA1++;
			break;
		case 2 :
			digitA2++;
			break;
		case 3 :
			digitA3++;
			break;
		case 4 :
			digitA4++;
			break;
		case 5 :
			digitA5++;
			break;
		case 6 :
			digitA6++;
			break;
		case 7 :
			digitA7++;
			break;
		case 8 :
			digitA8++;
			break;
		case 9 :
			digitA9++;
			break;
		default :
			digitA0++;
			break;
		}
	}


	// Running through the second integer
	for (divBy = 1;  (arg2 / divBy) > 0; divBy *= 10) {
		
		// Isolating the digit
		digitOccur = (arg2 / divBy) % 10;

		// Incrementing the proper variable
		switch (digitOccur) {
		case 1 :
			digitB1++;
			break;
		case 2 :
			digitB2++;
			break;
		case 3 :
			digitB3++;
			break;
		case 4 :
			digitB4++;
			break;
		case 5 :
			digitB5++;
			break;
		case 6 :
			digitB6++;
			break;
		case 7 :
			digitB7++;
			break;
		case 8 :
			digitB8++;
			break;
		case 9 :
			digitB9++;
			break;
		default :
			digitB0++;
			break;
		}
	}
	
	cout << "Digit\t"
		  << "In 1st #\t"
		  << "In 2nd #" << endl
		  << endl;

	if (digitA0 != 0 && digitB0 != 0) {
		cout << "0:\t";
		cout << digitA0 << "\t\t";
		cout << digitB0 << endl;
	}
	if (digitA1 != 0 && digitB1 != 0) {
		cout << "1:\t";
		cout << digitA1 << "\t\t";
		cout << digitB1 << endl;
	}
	if (digitA2 != 0 && digitB2 != 0) {
		cout << "2:\t";
		cout << digitA2 << "\t\t";
		cout << digitB2 << endl;
	}
	if (digitA3 != 0 && digitB3 != 0) {
		cout << "3:\t";
		cout << digitA3 << "\t\t";
		cout << digitB3 << endl;
	}
	if (digitA4 != 0 && digitB4 != 0) {
		cout << "4:\t";
		cout << digitA4 << "\t\t";
		cout << digitB4 << endl;
	}
	if (digitA5 != 0 && digitB5 != 0) {
		cout << "5:\t";
		cout << digitA5 << "\t\t";
		cout << digitB5 << endl;
	}
	if (digitA6 != 0 && digitB6 != 0) {
		cout << "6:\t";
		cout << digitA6 << "\t\t";
		cout << digitB6 << endl;
	}
	if (digitA7 != 0 && digitB7 != 0) {
		cout << "7:\t";
		cout << digitA7 << "\t\t";
		cout << digitB7 << endl;
	}
	if (digitA8 != 0 && digitB8 != 0) {
		cout << "8:\t";
		cout << digitA8 << "\t\t";
		cout << digitB8 << endl;
	}
	if (digitA9 != 0 && digitB9 != 0) {
		cout << "9:\t";
		cout << digitA9 << "\t\t";
		cout << digitB9 << endl;
	}


	cout << endl
		  << endl
		  << endl;

	return;
}
void printCommonDigitWithArray(int arg1, int arg2) {
	int array1[ 10 ] = { 0 };
	int array2[ 10 ] = { 0 };

	int divBy;
	int digitOccur;
	int i;

	cout << "Finding common digit occurences for " << arg1;
	cout << " and " << arg2 << endl << endl;

	if (arg1 < 0) {
		arg1 *= -1;
	}
	if (arg2 < 0) {
		arg2 *= -1;
	}

	// Populating the first array
	for (divBy = 1; (arg1 / divBy) > 0; divBy *= 10) {

		// Isolating the digit
		digitOccur = (arg1 /divBy) % 10;

		// Incrementing the value of digit found
		array1[ digitOccur ]++;
	}

	// Populating the second array
	for (divBy = 1; (arg2 / divBy) > 0; divBy *= 10) {

		// Isolating the digit
		digitOccur = (arg2 /divBy) % 10;

		// Incrementing the value of digit found
		array2[ digitOccur ]++;
	}

	// Printing results
	cout << "Digit\t"
		  << "In 1st #\t"
		  << "In 2nd #" << endl
		  << endl;

	for (i = 0; i < 10; i++) {
		if (array1[ i ] != 0 && array2[ i ] != 0) {
			cout << i << "\t";
			cout << array1[ i ] << "\t\t";
			cout << array2[ i ] << endl;

		}
	}


	cout << endl
		  << endl
		  << endl;	

	return;
}