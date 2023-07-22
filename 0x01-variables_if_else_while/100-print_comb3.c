#include <stdio.h>

/**
* main - Prints the numbers combinations
*
* Return: 0 always
*/
int main(void)
{
	int tens_digit;
	int ones_digit;

	for (tens_digit = '0'; tens_digit <= '8'; tens_digit++)
	{
		for (ones_digit = tens_digit + 1; ones_digit <= '9'; ones_digit++)
		{
			putchar(tens_digit);
			putchar(ones_digit);

			/* last combination */
			if (!(tens_digit == '8' && ones_digit == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
