#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - Prints if a given integer is positive, negative or zero
 * @i: The integer to be used as case study
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
