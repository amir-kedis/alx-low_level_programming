#include "main.h"
#include <stdio.h>

/**
 * is_seprator - returns if a char a word seprator
 * @c: the char to test
 * Return: true or false
 */
int is_seprator(char c)
{
	char seprators[] = {',', ';', '.', '!', '?',	'"',	'(', ')',
											'{', '}', '0', ' ', '\t', '\n', '\0'};
	int i;

	for (i = 0; seprators[i] != '\0'; i++)
	{
		if (c == seprators[i])
			return (1);
	}

	return (0);
}

/**
 * cap_string - captilizes a string
 * @s: a string
 * Return: the transformed string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 || is_seprator(s[i - 1]))
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 'a' - 'A';
		}
	}
	return (s);
}
