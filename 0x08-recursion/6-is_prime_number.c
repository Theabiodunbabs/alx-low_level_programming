#include "main.h"

/**
 * is_prime_number - Checks if the input integer is a prime number.
 * @n: The number to be checked.
 * @i: the divisor to check the factors
 * Return: 1 if the number is a prime number, 0 otherwise.
 */
int is_prime_helper(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Recursive helper function to check for prime numbers.
 * @n: The number to be checked.
 * @i: The divisor to check for factors.
 *
 * Return: 1 if the number is a prime number, 0 otherwise.
 */
int is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_helper(n, i + 1));
}
