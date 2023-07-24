#include "main.h"

/**
	* times_table - prints the times times_table
*/
void times_table(void)
{
	int row;
	int col;
	int mult_result;
	const int TIMES_OF = 9;


	for (row = 0; row <= TIMES_OF; row++)
	{
		for (col = 0; col <= TIMES_OF; col++)
		{
			mult_result = row * col;

			if (mult_result > 9)
			{
				_putchar(mult_result / 10 + '0');
				_putchar(mult_result % 10 + '0');
			}
			else if (col == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(' ');
				_putchar(mult_result % 10 + '0');
			}


			if (col != TIMES_OF)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
