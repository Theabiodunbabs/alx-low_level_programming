#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: Pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j, k = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]);

	total_length += ac - 1;
	result = malloc((total_length + 1) * sizeof(char));

	if (result == NULL)
		return NULL;
	
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			result[k++] = av[i][j];

		if (i != ac - 1)
			result[k++] = '\n';
	}

	result[k] = '\0';

	return (result);
}
