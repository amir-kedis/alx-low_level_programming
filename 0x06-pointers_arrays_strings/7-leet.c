#include "main.h"

/**
 * leet - encodes a message in a string
 * @s: string to encode
 * Return: encoded string
 */
char *leet(char *s)
{
	const char *source = "aAeEoOtTlL";
	const char *destin = "4433007711";

	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; source[j]; j++)
			if (s[i] == source[j])
				s[i] = destin[j];

	return (s);
}
