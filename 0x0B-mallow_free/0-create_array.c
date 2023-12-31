#include <stdlib.h>

/**
 * create_array - Creates an array of characters
 * @size: the size of the array to be craeted
 * @c: The character to initialize the array with
 *
 * Return: A pointer to the newly created array,
 *	or NULL if size is 0 or if the allocation fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
