#include <stdio.h>
#include <stdlib.h>

/**
 * calculates minimum coins
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful, otherwise 1 for an error
 */
int main(int argc, char *argv[])
{
	int cents, coins[] = {25, 10, 5, 2, 1};
	int num_coins, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = 0;

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			num_coins++;
		}
	}

	printf("%d\n", num_coins);
	return (0);
}
