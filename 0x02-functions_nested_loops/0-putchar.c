#include <main.h>

/**
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* program to print _putchar */
	printMessage();
	return (0); /* Return 0 to indicate success */
}

void printMessage()
{
	char message[] = "_putchar\n";
	int i;

	for (i = 0; message[i] != '\0'; i++)
	{
		_putchar(message[i]); /* call _putchar to print each charater */
	}
}
