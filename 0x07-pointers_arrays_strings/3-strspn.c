#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the substring containing characters to be searched for.
 *
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int is_match = 1;

	while (*s && is_match)
	{
		char *a = accept;
		is_match = 0;

		while (*a)
		{
			if (*s == *a)
			{
				is_match = 1;
				count++;
				break;
			}
			a++;
		}

		s++;
	}

	return (count);
}
