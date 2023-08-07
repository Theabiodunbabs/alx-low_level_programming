#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - Duplicates a string.
 * @str: THe input string.
 * Return: Pointer to the duplicated string, or NULL if allocation fails
 */
char *_strdup(char *str)
{
	char *duplicate;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	duplicate = malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		duplicate[i] = str[i];

	duplicate[len] = '\0';
	return (duplicate);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 * Return: Pointer to an array of strings (words), or NULL if allocation fails
 */
char **strtow(char *str)
{
	int i, j, len, word_count = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	len = strlen(str);
	words = malloc((len + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			j = i;
			while (str[i] != ' ' && str[i] != '\0')
				i++;

			words[word_count] = _strdup(str + j);

			if (words[word_count] == NULL)
			{
				for (i = 0; i < word_count; i++)
					free(words[i]);
				free(words);
				return (NULL);
			}

			word_count++;
		}
	}

	words[word_count] = NULL;
	return (words);
}
