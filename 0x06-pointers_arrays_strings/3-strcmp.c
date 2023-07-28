#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: a string
 * @s2: a string
 * Return: an int indicating lexical order
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 == *s2)
	{
		if (*s1 == '\0' || *s2 == '\0')
		{
			break;
		}

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
