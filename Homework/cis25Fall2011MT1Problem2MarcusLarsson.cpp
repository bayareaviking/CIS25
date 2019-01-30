/***
	* Written By:		Marcus Larsson
	* Date:				10/13/2011
	* Program Name:	cis25Fall2011MT1Problem2MarcusLarsson.cpp
   */

#include <iostream>
using namespace std;

int analyzeDigitPatternMarcusLarsson(int arg) {
	int digit;		// Digit to search for
	int pattern;	// Pattern to search for
	int search;		// Search pattern to use
	int power;
	int temp;
	int num; 
	int div;
	int i;
	int p;

	search = 0;
	div = 0;
	power = 1;
	p = 0;

	cout << "Integer received as argument: " << arg << endl;

   cout << "\nThe digit in pattern: ";
	cin >> digit;

	cout << "\nNumber of character digit: ";
	cin >> pattern;
	cout << endl;

	// If arg is negative, setting num to positive to work with
	num = arg;
	if (arg < 0) {
		num *= -1;
	}

	// Creating a pattern to search the input digit for
	temp = 1;
	for (i = 0; i < pattern; i++) {
		search = (temp * digit) + search;
		temp *= 10;
	}

	// Creating a digit 'power' which is 10^digit
	for (i = 1; i < pattern; i++) {
		power *= 10;
	}

	// Rolling through and searching for the pattern
	for (div = 1; (num/div) > 0; div *= 10) {
		temp = (num / div) % (power * 10);
		if (temp == search) {
			num -= (digit * (div * power));
			p++;
		}		
	}

	// In case arg was negative, setting num back to negative
	if (arg < 0) {
		num *= -1;
	}	
	
	cout << "The updated value of the argument: " << num;
	cout << endl
		  << endl
		  << endl
		  << endl;

	return p;
}

int main() {
	int input;

	input = 1333343333;
	analyzeDigitPatternMarcusLarsson(input);

	input = -1333343333;
	analyzeDigitPatternMarcusLarsson(input);

	return 0;
}