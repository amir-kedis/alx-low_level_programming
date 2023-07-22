#include <stdio.h>

/**
* main - Prints the alphabet in reverse
*
* Return: 0 always
*/
int main(void)
{
	char aLetter;

	for (aLetter = 'z'; aLetter >= 'a'; aLetter--)
	{
		putchar(aLetter);
	}
	putchar('\n');

	return (0);
}
