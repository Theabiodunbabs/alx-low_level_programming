#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* this program prints alphabets */
int main(void)
{
	/* print lowercase and uppercase */

	char lower;
	char upper;

	/* print lowercase */
	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}

	/* print uppercase */
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}

	/* print newline */

	putchar('\n');

	return 0;
}
