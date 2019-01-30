/***
	* Program Name:	cis25Fall2011MarcusLarssonLab6CodeEx1.cpp
	* Written By:		Marcus Larsson
	* Date:				11/05/2011
	*/

#include <iostream>
using namespace std;
class MarcusFraction {
public:
	// Default constructor
	MarcusFraction() {
		iNum = 0;
		iDenom = 1;
	}
	// Copy constructor
	MarcusFraction(const MarcusFraction & frOld) {
		iNum = frOld.iNum;
		iDenom = frOld.iDenom;
	}
	// Convert constructor, takes one argument for iNum
	MarcusFraction(int num) {
		iNum = num;
		iDenom = 1;
	}
	// Convert constructor, takes two ints as arguments
	MarcusFraction(int num, int denom) {
		iNum = num;
		if (denom) {
			iDenom = denom;
		} else {
			iDenom = 1;
		}
	}
	~MarcusFraction() {
		cout << "Goodbye, World!" << endl;
	}
	// Mutator for iNum
	void setNum(int arg) {
		iNum = arg;
	}
	// Accessor for iNum
	int getNum() {
		return iNum;
	}
	// Mutator for iDenom, (if argument != 0, sets denominator to argument value. Otherwise, it sets it to 1)
	void setDenom(int arg) {
		if (arg) {
			iDenom = arg;
		} else {
			iDenom = 1;
		}
	}
	// Accessor for iDenom
	int getDenom() {
		return iDenom;
	}
	// Add() function
	void add(const MarcusFraction & arg) {
		int argNum;
		int argDenom;
		argNum = arg.iNum;
		argDenom = arg.iDenom;

		iNum *= argDenom;
		argNum *= iDenom;
		iDenom *= argDenom;
		iNum += argNum;		
	}
	// Subtract() function
	void subtract(const MarcusFraction & arg) {
		int argNum;
		int argDenom;
		argNum = arg.iNum;
		argDenom = arg.iDenom;

		iNum *= argDenom;
		argNum *= iDenom;
		iDenom *= argDenom;
		iNum -= argNum;	

	}
	// Multiply() function
	void multiply(const MarcusFraction & arg) {
		int argNum;
		int argDenom;
		argNum = arg.iNum;
		argDenom = arg.iDenom;

		iNum *= argNum;
		iDenom *= argDenom;
	}
	// Divide() function
	void divide(const MarcusFraction & arg) {
		int argNum;
		int argDenom;
		argNum = arg.iNum;
		argDenom = arg.iDenom;

		iNum *= argDenom;
		iDenom *= argNum;
	}
	// Finding GCD using Euclid's algorithm
	int gcd() {
		int x;
		int y;
		int z;

		x = iNum;
		y = iDenom;

		while ( y != 0 ) {
			z = x % y;
			x = y;
			y = z;
		}
	return x;
	}
	// Printing out the reduced fraction
	void print() {
		cout << "The fraction is " << iNum/gcd() << "/" << iDenom/gcd() << "." << endl;
	}
private:
	int iNum;
	int iDenom;
};

void menu();
void main() {

	menu();

	return;
}
void menu() {
	char input;
	MarcusFraction frA(1, 2);
	MarcusFraction frB(3, 7);
	MarcusFraction frC(18);
	MarcusFraction frD(4, 9);
	MarcusFraction frE(7);
	input = '0';

	while (input != '6') {
		cout << endl << endl
			  << "***************************" << endl
           << "*          MENU           *" << endl
           << "*                         *" << endl
           << "* 1.Calling add()         *" << endl
           << "* 2.Calling subtract()    *" << endl
           << "* 3.Calling multiply()    *" << endl
           << "* 4.Calling divide()      *" << endl
           << "* 5.Calling print()       *" << endl
           << "* 6.Quit                  *" << endl
           << "*                         *" << endl
           << "***************************" << endl
           << "\nSelect an option (Use integer) : ";
		cin >> input;
		cout << endl;

		switch (input) {
		case '1':
			cout << "Calling add(). . ." << endl;
			frA.add(frB);
			break;
		case '2':
			cout << "Calling subtract(). . ." << endl;
			frA.subtract(frC);
			break;
		case '3':
			cout << "Calling multiply(). . . " << endl;
			frA.multiply(frD);
			break;
		case '4':
			cout << "Calling divide(). . . " << endl;
			frA.divide(frE);
			break;
		case '5':
			frA.print();
			break;
		case '6':
			cout << "Goodbye. . ." << endl;
			break;
		default:
			cout << "What the?!? That's not a menu option!\nTry again: " << endl;
			break;
		}
	}
	return;
}