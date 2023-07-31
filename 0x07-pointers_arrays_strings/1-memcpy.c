#include "main.h"

/**
 * _memcpy - copies an area of memory
 * @dest: a pointer to the destination
 * @src: a pointer to the area from which the coping happens
 * @n: the number of bytes to copy
 * Return: pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
