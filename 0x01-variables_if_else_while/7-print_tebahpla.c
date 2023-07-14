#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* this program prints alphabets */
int main(void)
{
	/* print alphabets in reverse */

	char m;

	for (m = 'z'; m >= 'a'; m--)
	{
		putchar(m);
	}
	putchar('\n');

	return (0);
}
