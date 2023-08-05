#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program multiples two numbers
 * It taks two arguements from the command line and prints the multiplication
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful, otherwise 1 for an error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (10);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
