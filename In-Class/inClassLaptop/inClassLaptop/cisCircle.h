/* FILE #1 - Class Specification File for cisCircle
** Does not include definitions for member functions. 
**	Only has prototypes and variables.
*/

#ifndef CISCIRCLE_H
#define CISCIRCLE_H

#include "cisFraction.h"

class CisCircle {
public:
	CisCircle();

	CisCircle(const CisCircle&);

	CisFraction computeArea(void);

	int compareCircle(const CisCircle&);

private:
	CisFraction radius;
};

#endif