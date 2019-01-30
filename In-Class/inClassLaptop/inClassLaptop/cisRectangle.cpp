/* FILE # 2 - Implemenation File
**	Defines member functions
*/
#include "cisRectangle.h"
using namespace std;

	CisRectangle::CisRectangle() {
		length = 0;
		width = 1;
	}

	CisRectangle::CisRectangle(const CisRectangle& frOld) {
		length = frOld.length;
		width = frOld.width;
	}