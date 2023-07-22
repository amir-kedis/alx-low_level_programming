#include <stdio.h>

/**
* main - Prints the alphabet
*
* Return: 0 always
*/
int main(void)
{
	char aLetter;

	for (aLetter = 'a'; aLetter <= 'z'; aLetter++)
	{
		putchar(aLetter);
	}
	putchar('\n');

	return (0);
}
