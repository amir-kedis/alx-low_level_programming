#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes lowercaes letters to upper
 * @s: string
 * Return: the string in uppercase
 */
char *string_toupper(char *s)
{
	char *head = s;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 'a' - 'A';
		s++;
	}
	return (head);
}
