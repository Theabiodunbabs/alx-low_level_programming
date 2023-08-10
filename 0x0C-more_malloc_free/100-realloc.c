#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory block previously allocated with malloc
 * @old_size: Size of the allocate space for ptr
 * @new_size: New size of the memory block
 *
 * Return: Pointer to the reallocated memory block, or
 *	NULL if new_size is 0 and ptr is not NULL, or if malloc fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size <= old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	memcpy(new_ptr, ptr, old_size);
	free(ptr);

	return (new_ptr);
}
