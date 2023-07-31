#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string to search in.
 * @c: The character to be found.
 *
 * Return: Pointer to the first occurrence or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c) /* Check the null terminator as well */
		return (s);

	return (NULL);
}
