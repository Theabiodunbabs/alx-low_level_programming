#include <stdio.h>

/**
 * print_times_table - Prints the n times table starting from 0
 * @n: The number of rows and columns in the times table
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return; /* If n is outside the valid range, do not print */

	int i, j;
	int product;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;

			if (j == 0)
				printf("%d", product);
			else
				printf(", %3d", product);
		}
		printf("\n");
	}
}
