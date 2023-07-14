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
        
	/* getting last digit of n */
	int lastdigit = abs(n % 10);

	printf("Last digit of %d is %d and is ", n, lastdigit);

        if (lastdigit > 5)
        {
        printf("greater than 5\n");
        }
        else if (n == 0)
        {
        printf("0\n");
        }
        else
        {
        printf("less than 6 and not 0\n");
        }
        return (0);
}
