#include <stdio.h>

/**
* main - Prints the numbers from 1 to 10
*
* Return: 0 always
*/
int main(void)
{
	char aDigit;

	for (aDigit = '0'; aDigit <= '9'; aDigit++)
	{
		putchar(aDigit);
	}
	putchar('\n');

	return (0);
}
