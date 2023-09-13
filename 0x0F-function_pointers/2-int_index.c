#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array using comparison function
 * @size: number of elements in the array
 * @array: pointer to the array
 * @cmp: pointer to the function to be used to compare variables
 *
 * Return: The index of the first element for which cmp
 *	function does not return 0. If no element matches, return -1,
 *	if size is less than or equal to 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
