#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n, or -1 if n does have a square root
 */
int sqrt_helper (int n, int start);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 1));
}


/**
 * sqrt_helper - Recursive helper function to find the square root.
 * @n: The number to find the square root of.
 * @start: The starting point to search for the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root. 
 */
int sqrt_helper(int n, int start)
{
	if (start * start > n)
		return (-1);

	if (start * start == n)
		return (start);

	return sqrt_helper(n, start + 1);
}
