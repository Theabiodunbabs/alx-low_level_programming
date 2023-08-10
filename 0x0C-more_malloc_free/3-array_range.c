#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers within a specified range
 * @min: Minimum value of the range (included)
 * @max: Maximum value of the range (included)
 *
 * Return: Pointer to the newly created array, or NULL if min > max
 *	or malloc fails.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
