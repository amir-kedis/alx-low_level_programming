#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: pointer to a char
 * @src: pointer to a char
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
