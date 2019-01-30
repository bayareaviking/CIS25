/* FILE #1 - Class Specification File for cisRectangle
** Does not include definitions for member functions. 
**	Only has prototypes and variables.
*/

#ifndef CISRECTANGLE_H
#define CISRECTANGLE_H

#include "cisFraction.h"

class CisRectangle {
public:
	CisRectangle();

	CisRectangle(const CisRectangle&);

private:
	int length;
	int width;
};

#endif