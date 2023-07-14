#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* This program shows the usage of if-else statements */
int main(void)
{
	/* Function will set a value for n */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* if else loop for n */
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}
