/**
 * check_digits - check if string is all digits
 * @s: string to check
 * Return: 1 if all digits, 0 otherwise
 */
#include <stdio.h>
#include <stdlib.h>
int check_digits(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) < '0' || *(s + i) > '9')
			return (0);
	}
	return (1);
}

/**
 * _strlen - calculate length of string
 * @s: string to calculate length of
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
		;
	return (i);
}

/**
 * init_str - initialize string with null bytes
 * @str: string to initialize
 * @len: length of string
 */
void init_str(char *str, int len)
{
	int i;

	for (i = 0; i < len; i++)
		*(str + i) = '0';
	*(str + i) = '\0';
}

/**
 * mul - multiply two numbers and print result
 * @num1: first number
 * @num2: second number
 */
void mul(char *num1, char *num2)
{
	int len1, len2, len, i, j, carry, digit1, digit2, res;
	char *result;

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len = len1 + len2;
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	init_str(result, len);
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		digit1 = num1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			digit2 = num2[j] - '0';
			res = digit1 * digit2 + carry + (result[i + j + 1] - '0');
			carry = res / 10;
			result[i + j + 1] = res % 10 + '0';
		}
		if (carry > 0)
			result[i + j + 1] = (result[i + j + 1] - '0') + carry + '0';
	}
	for (i = 0; result[i] == '0' && result[i + 1]; i++)
		;
	printf("%s\n", result + i);
	free(result);
}

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success, 98 if failure
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;

	if (argc != 3 || !check_digits(argv[1]) || !check_digits(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[1] == '0' || *argv[2] == '0')
	{
		printf("0\n");
		return (0);
	}
	if (_strlen(argv[1]) < _strlen(argv[2]))
	{
		num1 = argv[2];
		num2 = argv[1];
	}
	else
	{
		num1 = argv[1];
		num2 = argv[2];
	}
	mul(num1, num2);
	return (0);
}
