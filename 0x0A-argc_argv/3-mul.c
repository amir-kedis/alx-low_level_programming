#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	product = num1 * num2;
	printf("%d\n", product);

	return (0);
}
