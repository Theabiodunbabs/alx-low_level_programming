#include "main.h"
#include <math.h>

int sqrt;

/**
 * _sqrt_recursion - calculate natural square root of a number
 * @n: the number to be calculated
 *
 * Returns: natural square root of a number, if n has no square root, returns -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (sqrt * sqrt == n)
		return (sqrt);
	else
		return (_sqrt_recursion(n - 1));
}
