#include "main.h"

/**
 * print_times_table - print the times table of n
 * @n: number between 0 and 15
 */
void print_times_table(int n)
{
	int row, col, mult_result;

	if (n > 15 || n < 0)
		return;
	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			if (col == 0)
			{
				_putchar('0');
				if (col != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				continue;
			}
			mult_result = row * col;
			/* Spaces that fixes the size of small numbers */
			if (mult_result <= 99)
				_putchar(' ');
			if (mult_result <= 9)
				_putchar(' ');
			/* Prints the digits of the number */
			if (mult_result > 99)
			{
				_putchar(mult_result / 100 + '0');
				_putchar((mult_result / 10) % 10 + '0');
			} else if (mult_result > 9)
				_putchar(mult_result / 10 + '0');
			_putchar(mult_result % 10 + '0');
			if (col != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
