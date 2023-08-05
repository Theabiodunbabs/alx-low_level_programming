#include <stdio.h>

/**
 * main - This program prints its name using arguments
 * @argc: arguement count
 * @argv: arugement vector
 *
 * Return: Always 0(sucess)
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		fprintf(stderr, "Error:No program name provided.\n");
		return (1);
	}
	return (0);
}
