#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The firset string
 * @s2: The second string
 *
 * Return: Pointer to a newly allocated memory space containing the
 *	concatenated string, or NULL on failure.
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int length1 = 0, length2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length1])
		length1++;
	while (s2[length2])
		length2++;

	concatenated = (char *)malloc((length1 + length2 + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		concatenated[i] = s1[i];
	for (j = 0; j < length2; j++)
		concatenated[i + j] = s2[j];

	concatenated[i + j] = '\0';

	return (concatenated);
}
