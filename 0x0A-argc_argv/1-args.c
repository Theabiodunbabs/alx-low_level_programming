#include <stdio.h>
#include <stddef.h>

/**
 * This program prints the number of arguements passed into it. 
 * @argc: counts the arguements
 * @argv: arguements vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc);
	return (0);
}
