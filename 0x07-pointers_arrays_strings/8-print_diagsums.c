#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the square matrix.
 * @size: The size of the square matrix.
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, sum_diag1 = 0, sum_diag2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_diag1 += a[i * size +i];
		sum_diag2 += a[i *size + (size - 1 - i)];
	}

	printf("Sum of the main diagonal: %d\n", sum_diag1);
	printf("Sun of the secondary diagonal: %d\n", sum_diag2);
}
