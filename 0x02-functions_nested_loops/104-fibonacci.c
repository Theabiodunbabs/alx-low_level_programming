#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	unsigned long int fib1 = 1, fib 2 = 2, next_fib;

	printf("%lu, %lu", fib1, fib2); /* print the first two fibonacci numbers */

	for (count = 3; count <= 98; count++)
	{
		next_fib = fib1 + fib2;
		printf(", %lu", next_fib);

		/* Update values for the next iteration */
		fib1 = fib2;
		fib2 = next_fib;
	}

	printf("\n");

	return (0);

}
