/* FILE #1 - Class Specification File for cisFraction
** Does not include definitions for member functions. 
**	Only has prototypes and variables.
*/

#ifndef CISFRACTION_H
#define CISFRACTION_H

#include <iostream>
using namespace std; // Shouldn't be needed, but prevents a build-error.

class CisFraction {
public:
	CisFraction();

	CisFraction(const CisFraction&);

private:
	int num;
	int denom;
};

#endif