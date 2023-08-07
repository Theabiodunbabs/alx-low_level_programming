#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: The string to be duplicated
 *
 * Return: Pointer to the duplicated string, or NULL if str is NUL or if
 *	memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
