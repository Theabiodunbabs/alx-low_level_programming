#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* this program prints alphabets */
int main(void)
{
	/* set character for alphabets */

	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
		if (m != 'e' && m != 'q')
		{
		putchar(m);
		}
	}
	putchar('\n');

	return (0);
}
