#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to new string, or NULL if error
 */
char *argstostr(int ac, char **av)
{
	char *str;
	unsigned int i, j, k = 0, len = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < (unsigned int)ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < (unsigned int)ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			str[k] = av[i][j];
		str[k] = '\n';
		k++;
	}

	str[len] = '\0';

	return (str);
}
