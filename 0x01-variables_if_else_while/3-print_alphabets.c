#include <stdio.h>

/**
* main - Prints the alphabet lower and uppercase
*
* Return: 0 always
*/
int main(void)
{
	char aLetter;

	for (aLetter = 'a'; aLetter <= 'z'; aLetter++)
		putchar(aLetter);

	for (aLetter = 'A'; aLetter <= 'Z'; aLetter++)
		putchar(aLetter);

	putchar('\n');

	return (0);
}
