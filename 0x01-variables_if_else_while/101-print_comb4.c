#include <stdio.h>

/**
* main - Prints the numbers combinations
*
* Return: 0 always
*/
int main(void)
{
	int hundres_digit;
	int tens_digit;
	int ones_digit;

	for (hundres_digit = '0'; hundres_digit <= '7'; hundres_digit++)
		for (tens_digit = hundres_digit + 1; tens_digit <= '8'; tens_digit++)
			for (ones_digit = tens_digit + 1; ones_digit <= '9'; ones_digit++)
			{
				putchar(hundres_digit);
				putchar(tens_digit);
				putchar(ones_digit);

				/* last combination */
				if (!(hundres_digit == '7' && tens_digit == '8' && ones_digit == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}

	putchar('\n');

	return (0);
}
