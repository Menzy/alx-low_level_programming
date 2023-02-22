#include "main.h"
/**
 * _abs - function to get the absolute value of a number n
 * @n: nth absolute power
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);

	else
	{
		n = n * -1;
		return (n);
	}
}
