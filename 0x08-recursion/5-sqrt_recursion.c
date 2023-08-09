#include "main.h"

/**
 * sqrt_helper - helps find the natural square root of a number.
 * @n: number to get square root of
 * @i: iterator
 * Return: square root of n
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to get square root of
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}
