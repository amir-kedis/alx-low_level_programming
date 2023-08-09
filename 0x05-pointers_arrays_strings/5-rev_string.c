#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: pointer to a char
 * Return: nothing
 */
void rev_string(char *s)
{
	char temp;
	int length = 0;
	int i = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
