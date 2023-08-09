#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: pointer to a char
 * Return: nothing
 */
void puts_half(char *str)
{
	int length = 0;
	int i = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (length + 1) / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
