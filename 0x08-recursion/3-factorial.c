#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: number to get factorial of
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n)
		return (n * factorial(n - 1));
	return (1);
}
