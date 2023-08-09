#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 * @s: pointer to a char
 * Return: nothing
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	/* return back from the null char */
	s--;

	while (length > 0)
	{
		_putchar(*s);
		s--;
		length--;
	}

	_putchar('\n');
}
