#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatentes two strings
 * @dest: destinations string
 * @src: source string
 * Return: the containation of dest and src;
 */
char *_strcat(char *dest, char *src)
{
	char *cur_char = dest;

	/* advace to the end of dest */
	while (*cur_char != '\0')
	{
		cur_char++;
	}

	/* copy src */
	while (*src != '\0')
	{
		*cur_char = *src;
		cur_char++;
		src++;
	}
	*cur_char = '\0';
	return (dest);
}
