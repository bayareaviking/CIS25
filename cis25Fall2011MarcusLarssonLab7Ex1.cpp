/*** Program Name:	cis25Fall2011MarcusLarssonLab7Ex1.cpp
	* Written By:		Marcus Larsson
	* Date Written:	11/09/2011
	*/

#include <iostream>
#include "cisFraction.h"
using namespace std;

void main() {
	Fraction frA(1, -2);
	Fraction frB(3, 4);
	Fraction frC;

	frC = frA + frB;

	cout << "The resulting sum is " << frC.getNum() << "/" << frC.getDenom() << "." << endl;

	frC = frA - frB;

	cout << "The resulting subtraction is " << frC.getNum() << "/" << frC.getDenom() << "." << endl;

	frC = frA * frB;

	cout << "The resulting product is " << frC.getNum() << "/" << frC.getDenom() << "." << endl;

	frC = frA / frB;

	cout << "The resulting division is " << frC.getNum() << "/" << frC.getDenom() << "." << endl;

	return;
}