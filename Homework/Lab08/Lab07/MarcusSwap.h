/*** A swap-template used for finding largest and smallest values
	* Code borrowed from Charles Stuart
	*/
#include <iostream>
using namespace std;

template <class T>
void swapLargest(T& arg1, T& arg2)
{
	T temp;
	if(arg1 < arg2)
	{
		temp = arg1;
		arg1 = arg2;
		arg2 = temp;
	}
	return;
};
template <class T>
void swapSmallest(T& arg1, T& arg2)
{
	T temp;
	if(arg1 > arg2)
	{
		temp = arg1;
		arg1 = arg2;
		arg2 = temp;
	}
	return;
};