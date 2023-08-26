#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to check length of
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to copy
 * Return: pointer to duplicated string in allocated memory
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		dup[i] = str[i];
	dup[len] = '\0';
	return (dup);
}

/**
 * strtow - splits a string into words.
 * @str: string to split
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, l, wc = 0, len = _strlen(str);

	if (str == NULL || len == 0)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			wc++;
	}
	if (wc == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0, j = 0; i < len; i++)
		if (str[i] != ' ')
		{
			for (k = i; str[k] != ' ' && str[k] != '\0'; k++)
				;
			words[j] = malloc(sizeof(char) * (k - i + 1));
			if (words[j] == NULL)
			{
				for (j--; j >= 0; j--)
					free(words[j]);
				free(words);
				return (NULL);
			}
			for (l = 0; l < (k - i); l++)
				words[j][l] = str[i + l];
			words[j][l] = '\0';
			j++;
			i = k;
		}
	words[j] = NULL;
	return (words);
}
