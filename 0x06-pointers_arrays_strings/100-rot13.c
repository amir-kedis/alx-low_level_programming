#include "main.h"

/**
 * rot13 - enocdes a string
 * @s: a string
 * Return: the encoded string
 */
char *rot13(char *s)
{
	char src[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char des[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; src[j] != '\0'; j++)
			if (s[i] == src[j])
			{
				s[i] = des[j];
				break;
			}

	return (s);
}
