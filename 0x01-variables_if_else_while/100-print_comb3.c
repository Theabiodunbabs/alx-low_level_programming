#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* this program prints two digits */

int main(void)
{
	int a, b;
	
	for (a = 0; a <= 8; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');

			if (a != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	
	putchar('\n');

	return (0);
}

