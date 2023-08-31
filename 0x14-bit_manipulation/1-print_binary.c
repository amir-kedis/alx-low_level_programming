#include "main.h"

#define BITS_IN_ULINT (8 * 8)

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, flag = 0;

	if (!n)
	{
		_putchar('0');
		return;
	}

	for (i = BITS_IN_ULINT - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			flag = 1;
		if (flag)
			_putchar((n >> i) & 1 ? '1' : '0');
	}
}

/* starts from the most significant bit and prints the value of the */
/* bit at each position. It uses a flag to determine when to print the value */
/* of the bit. The flag is set when the first 1 is encountered. */
