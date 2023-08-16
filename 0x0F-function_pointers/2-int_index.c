#include <stddef.h>
#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}

int is_98(int elem)
{
	return (98 == elem);
}

int is_strictly_positive(int elem)
{
	return (elem > 0);
}

int abs_is_98(int elem)
{
	return (elem == 98 || -elem == 98);
}
