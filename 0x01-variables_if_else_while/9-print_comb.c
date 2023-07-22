#include <stdio.h>

/**
* main - Prints the numbers seprated
*
* Return: 0 always
*/
int main(void)
{
	int aDigit;

	for (aDigit = '0'; aDigit <= '9'; aDigit++)
	{
		putchar(aDigit);

		if (aDigit != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
