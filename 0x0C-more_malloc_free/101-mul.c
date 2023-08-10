#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two positve numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 98 on incorrect input
 */
int main(int argc, char *argv[])
{
	int i, j;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (98);
			}
		}
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return (0);
}
