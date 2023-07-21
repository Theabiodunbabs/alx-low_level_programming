#include <unistd.h>

/**
 * _putchar - writes a character to the standard output (stdout)
 * @c: The character to print
 *
 * Return: On success 1. On error, -1 is returnd, and errno is set appropriately.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}