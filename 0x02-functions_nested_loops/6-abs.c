#include "main.h"

/**
 * _abs - Computes the absolute value of an interger
 * @c: The integer to be computed
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
