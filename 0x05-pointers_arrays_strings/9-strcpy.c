#include "main.h"
#include <stddef.h>

/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed 
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: The pointer to the destination buffer (dest).
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;
	char *src_ptr = src;
	
	while (*src_ptr != '\0')
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
	}

	*dest_ptr = '\0'; /* adds the terminating null byte */

	return (est)
}
