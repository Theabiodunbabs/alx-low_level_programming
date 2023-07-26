#include "main.h"

/**
 * _strncat - Concatenates two strings, taking at most n bytes from src.
 * @dest: The destination buffer where the concatenated string will be stored.
 * @src: The source string to be appended.
 * @n: The maximum number of bytes to be taken from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* calculate the length of the destination string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Assign the src string to the dest string */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len++] = src[i];

	/* Null-terminate the resulting string */
	dest[dest_len] = '\0';

	return (dest);
}
