#include <stdio.h>

/**
* main - Prints base 16 digits
*
* Return: 0 always
*/
int main(void)
{
	char aDigit;

	for (aDigit = '0'; aDigit <= '9'; aDigit++)
		putchar(aDigit);

	for (aDigit = 'a'; aDigit <= 'f'; aDigit++)
		putchar(aDigit);

	putchar('\n');

	return (0);
}
