#include "main.h"

/**
 * _strncpy - Copies a string, including the terminating null byte.
 * @dest: The destination buffer where the copied string will be stored.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to be copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
