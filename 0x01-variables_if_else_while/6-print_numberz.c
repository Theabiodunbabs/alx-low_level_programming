#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* this program prints alphabets */
int main(void)
{
/* print numbers in base 10 */

	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0'+ num);
	}

	putchar('\n');
	return (0);
}
