#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatentes two strings
 * @dest: destinations string
 * @src: source string
 * @n: limit of src bytes number
 * Return: the containation of dest and src;
 */
char *_strncat(char *dest, char *src, int n)
{
	char *cur_char = dest;
	int src_index = 0;

	/* advace to the end of dest */
	while (*cur_char != '\0')
	{
		cur_char++;
	}

	/* copy src */
	while (*src != '\0' && src_index < n)
	{
		*cur_char = *src;
		cur_char++;
		src++;
		src_index++;
	}
	*cur_char = '\0';
	return (dest);
}
