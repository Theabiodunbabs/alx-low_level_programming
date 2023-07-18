#include "main.h"

/**
 * _islower - checks if a letter is lowercase
 * @c: the case study
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	/* Check if c is int he range */
	if (c >= 'a' && c <= 'z')

		return (1);
	else
		return (0);
}
