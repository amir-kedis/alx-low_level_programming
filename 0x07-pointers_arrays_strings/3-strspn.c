#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: String to be scanned.
 * @accept: String containing the characters to match.
 * Return: Number of characters in the initial segment of s which
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			break;

		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				count++;
	}

	return (count);
}
