#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The input string.
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int digit;

	while (*s == ' ')
		s++;

	while (*s == '-' || *s == '+')
	{
		if (*s == '-')
		sign *= -1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';

		/* check for overflow or underflow */
		if (result > (INT_MAX - digit) / 10)
		{
			return (sign == 1 ? INT_MAX : INT_MIN);
		}

		result = result * 10 + digit;
		s++;
	}

	return (result * sign);
}
