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
		if (aLetter == 'e' || aLetter == 'q')
			continue;

		putchar(aLetter);
	}
	putchar('\n');

	return (0);
}
