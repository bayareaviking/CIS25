/* FILE # 2 - Implemenation File
**	Defines member functions
*/
#include "cisFraction.h"
using namespace std;

	CisFraction::CisFraction() {
		num = 0;
		denom = 1;
	}

	CisFraction::CisFraction(const CisFraction& frOld) {
		num = frOld.num;
		denom = frOld.denom;
	}