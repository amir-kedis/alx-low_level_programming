#include "main.h"

/**
 * is_prime_helper - checks if a number is prime.
 * @n: number to check
 * @i: iterator
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime.
 * @n: number to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime_helper(n, 2));
}
