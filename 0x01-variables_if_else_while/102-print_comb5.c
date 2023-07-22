#include <stdio.h>

/**
* main - Prints the numbers combinations
*
* Return: 0 always
*/
int main(void)
{
	int first_num;
	int last_num;

	for (first_num = 0; first_num < 100; first_num++)
	{
		for (last_num = 0; last_num < 100; last_num++)
		{
			/* Take only one combination */
			if (first_num >= last_num)
				continue;

			/* Print First Num digits */
			putchar(first_num / 10 + '0');
			putchar(first_num % 10 + '0');

			putchar(' ');

			/* Print Second Num */
			putchar(last_num / 10 + '0');
			putchar(last_num % 10 + '0');

			if (first_num != 98 || last_num != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
