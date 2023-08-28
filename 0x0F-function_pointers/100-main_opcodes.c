#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints opcodes of main function
 * @s: pointer to main function
 * @n: number of bytes to print
 * Return: void
 */
void print_opcodes(char *s, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", s[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints opcodes of main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful, 1 if number of arguments is wrong, 2 if n is
 * negative
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
