#include <stdio.h>
#include <string.h>

/**
 * is_palindrome_recursive -Helper function to check if a string is palindrome
 * @s: Pointer to the string to be checked.
 * @start: Starting index of the current comparison.
 * @end: ending index of the current comparison.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/** 
 * is_palindrome - checks if a string is a palindrome.
 * @s: Pointer to the string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0 || len == 1)
		return (1);

	return (is_palindrome_recursive(s, 0, len - 1));
}
