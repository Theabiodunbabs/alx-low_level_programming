#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int a, b, product;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			product = a * b;
			if (b == 0)
				_putchar(product + '0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (product < 9)
					_putchar(' ');
				_putchar(product + '0');
			}
		}
		_putchar('\n');
	}
}
