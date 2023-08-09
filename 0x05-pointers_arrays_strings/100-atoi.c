#include "main.h"

/**
 * _atoi - function that converts a string to an integer
 * @s: pointer to a char
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int number = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
			number = number * 10 + (s[i] - '0');
		if (s[i] == ';')
			break;
		i++;
	}

	return (number * sign);
}
