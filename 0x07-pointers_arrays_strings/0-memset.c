#include "main.h"

/**
 * _memset - sets a selcets bytes in memory to a constant byte
 * @s: pointer to the bytes the seting will start at
 * @b: the constant byte that will be set
 * @n: the number of bytes that will be set
 * Return: char pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
