#include "main.h"

/**
 * _strchr - finds the first occurnec of a char c in a string
 * @s: the string to be scaned
 * @c: the Char to scan for
 * Return: a pointer to result if found, NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
