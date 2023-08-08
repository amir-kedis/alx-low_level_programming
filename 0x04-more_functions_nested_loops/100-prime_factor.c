#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{

	unsigned long int n = 612852475143;
	unsigned long int i = 2;
	unsigned long int largest_prime = -1;

	while (i * i <= n)
	{
		while (n % i == 0)
		{
			largest_prime = i;
			n = n / i;
		}
		i = i + 1;
	}

	if (n > 1)
	{
		largest_prime = n;
	}

	printf("%lu\n", largest_prime);
	return (0);
}
