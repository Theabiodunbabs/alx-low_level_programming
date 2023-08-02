#include "main.h"

/**
 * factorial - calculates the factorial of a number
 * @n: The interger to be used as case study
 *
 * Return: Factorial of the given number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return n * factorial(n - 1);
}
