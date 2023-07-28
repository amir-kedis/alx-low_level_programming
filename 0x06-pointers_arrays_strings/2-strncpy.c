#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies from src to dest
 * @dest: destination string
 * @src: source string
 * @n: max bytes to copy
 * Return: a string copy of src
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *cur_char = dest;
	char cur_index = 0;

	while (*src != '\0' && cur_index < n)
	{
		*cur_char = *src;
		cur_char++;
		src++;
		cur_index++;
	}
	while (cur_index < n)
	{
		*cur_char = '\0';
		cur_char++;
		cur_index++;
	}

	return (dest);
}
