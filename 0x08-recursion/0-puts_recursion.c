#include "main.h"
#include <stdio.h>

int _putchar(char c);

/**
 * _puts_recursion - Prints a string then a new line using recursion
 * @s: Pointer to the string to be printed
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	_puts_recursion("Puts with recursion");
	return (0);
}
