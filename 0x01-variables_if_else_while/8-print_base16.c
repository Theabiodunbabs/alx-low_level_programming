#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
/*this program prints hexadecimal digits */
int main(void)
{
	char digit;
	char letter;

	/* print digits */
	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}

	/* print letters */
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
