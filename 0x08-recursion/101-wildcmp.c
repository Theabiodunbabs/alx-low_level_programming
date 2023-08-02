#include <stdio.h>

/**
 * wildcmp - Compares two strings and retuCompares two strings and returns 1 if they are identical,
 * 	or 0 otherwise. The second string can contain the special
 * 	character '*' which can replace any string (including empty).
 * @s1: First string to be compared.
 * @s2: Second string to be compared, which can contain '*',
 *
 * Return: 1 if strings are identical, 0 otherwise. 
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');

	if (*s2 == '*')
	{
		/* move s2 to the next character after '*' */
		while (*(s2 + 1) == '*')
			s2++;

		if (*(s2 + 1) == '\0')
			return (1);

		if (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1))
			return (1);

		return (wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2 || (*s1 != '\0' && *s2 == '?'))
	{

		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
