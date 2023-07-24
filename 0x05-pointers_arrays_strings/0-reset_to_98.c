#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - Updates the value of an integer to 98.
 * @n: Pointer to the integer to be updated.
 */
void reset_to_98(int *n)
{
	*n = 98;
}

/** main - check the code
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	return (0);
}
