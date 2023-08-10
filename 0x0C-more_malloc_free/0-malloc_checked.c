#include <stdlib.h>

/**
 * malloc_checked - assigned memory to unsigned int and check for error.
 *@b: used as test value.
 * Return: 0 if success and 98 otherwise
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
